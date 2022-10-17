#include <dlfcn.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <unistd.h>
#include <iostream>
using namespace std;

typedef int (*cal_func)(int, int);
const char* LIB_PATH = "./libreco.so";

int main() {
    ino_t so_ino = -1;
    void* handle = nullptr;
    char* error = nullptr;

    for(;;) {
        string function_name;
        cout << "What function (type `quit` to exit): ";
        cin >> function_name;
        if (function_name == "quit") break;
        struct stat attr;
        if (stat(LIB_PATH, &attr) == 0 && attr.st_ino != so_ino) {
            if (handle) {
                dlclose(handle);
            }
            handle = dlopen(LIB_PATH, RTLD_LAZY);
            if (!handle) {
                cerr << dlerror() << endl;
                exit(EXIT_FAILURE);
            }

            cal_func func = reinterpret_cast<cal_func>(
                dlsym(handle, function_name.c_str()));
            if (error = dlerror()) {
                cerr << error << endl;
                continue;
            } else {
                int a, b;
                cout << "Input two numbers: ";
                cin >> a >> b;
                cout << func(a, b) << endl;
            }
        }
    }

    return 0;
}
// g++ -rdynamic -o main main.cc -ldl

