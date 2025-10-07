#include <stdio.h>
#include "max.h"

int main() {
    int t[5] = {2, 5, 7, 2, 9};
    int max;

    maxim(t, 5, &max);
    printf("Maximum value = %d\n", max);

    return 0;
}