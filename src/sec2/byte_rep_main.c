#include "byte_representation.c"

int main() {
    int test_int;
    printf("Enter an integer: ");
    scanf("%d", &test_int);
    test_show_bytes(test_int);
    printf("\n\n");
    printBits(sizeof(test_int), &test_int);
    return 0;
}