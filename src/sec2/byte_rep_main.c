#include "byte_representation.c"

int main() {
    test_show_bytes(12345);
    printf("\n\n");
    int i = 12345;
    printBits(sizeof(i), &i);
    return 0;
}