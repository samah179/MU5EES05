#include <stdio.h>
#include "max.h"
#include "min.h"
#include "var.h"

int main() {
    int T[10] = {4, 9, 10, 11, 12, 15, 12, 9, 0, 30};
    int max, min;
    float var;

    maxim(T, 10, &max);
    minim(T, 10, &min);
    variance(T, 10, &var);

    printf("Max = %d\n", max);
    printf("Min = %d\n", min);
    printf("Variance = %.2f\n", var);

    return 0;
}