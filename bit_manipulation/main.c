#include <math.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

void print_bits(int i);

void btoa(char bits, char *output, int size);

bool is_little_endian();

int main(int argc, char* argv[]) {
    const int size = sizeof(unsigned int*) * 8;

    // turn on 3rd bit from end (2^2)
    int x = 0;
    print_bits(x);
    x |= (1 << 2);
    print_bits(x);
    // turn it off
    x = 65535;
    print_bits(x);
    x &= ~(1 << 2);
    print_bits(x);

    if (is_little_endian()) {
        printf("This system is little endian.\n");
    } else {
        printf("This system is big endian.\n");
    }
    return EXIT_SUCCESS;
}

void print_bits(int i) {
    const int size = sizeof(int) * 8;

    // char buffer[size + 1] = {0};
    char buffer[size + 1];
    memset(buffer, 0, size + 1);
    buffer[size] = '\0';
    btoa(i, buffer, size);
    printf("%9d: %s\n", i, buffer);
}

void btoa(char bits, char* output, int size) {
    for (int i = size - 1; i >= 0; i--, bits >>= 1) {
        /* code */
        output[i] = (char)('0' + (bits & 1));
    }
}

bool is_little_endian() {
    union {
        /* data */
        short number;   // 2 bytes
        char oneByte;   // 1 byte
    } endianTest;
    
    endianTest.number = 1;  //0000 0000 0000 0001

    return endianTest.oneByte;
}
