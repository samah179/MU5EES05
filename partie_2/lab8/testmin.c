#include <stdio.h>
#include "min.h"

int main() {
    int tab[5] = {2, 5, 7, 2, 9};
    int minimum;

    minim(tab, 5, &minimum);
    printf("Minimum value = %d\n", minimum);

    return 0;
}