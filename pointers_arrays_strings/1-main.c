#include <stdio.h>
#include "main.h"

int main(void) {
    int x = 5, y = 10;

    printf("Avant l'échange: x = %d, y = %d\n", x, y);
    swap_int(&x, &y);
    printf("Après l'échange: x = %d, y = %d\n", x, y);

    return 0;
}

