#include <stdio.h>

int main() {

    // Pointer types are not part of machine code; they are an abstraction
    // provided by C to help programmers avoid addressing errors.
    int a = 510;
    printf("%i\n", a);
    int *ap = &a;
    int ap2 = *ap;
    printf("%p\n", ap);
    printf("%i\n", ap2);


    return 0;
}