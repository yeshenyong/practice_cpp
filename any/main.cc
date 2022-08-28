#include "any.hpp"
#include <iostream>

using namespace std;

int main() {
    selfboost::any a = 1;
    std::cout << *selfboost::any_cast<int>(a) << '\n';
    a = 3.14;
    std::cout << *selfboost::any_cast<double>(a) << '\n';
    a = true;
    std::cout << std::boolalpha << *selfboost::any_cast<bool>(a) << '\n';


    return 0;
}

