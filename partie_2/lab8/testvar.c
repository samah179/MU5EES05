#include <stdio.h>
#include "var.h"

int main() {
    int tab[5] = {2, 5, 7, 2, 9};
    float v;

    variance(tab, 5, &v);
    printf("La variance du tableau est : %.2f\n", v);

    return 0;
}