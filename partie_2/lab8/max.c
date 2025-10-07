#include "max.h"

void maxim(int t[], int n, int *max) {
    if (n <= 0) return;
    *max = t[0];
    for (int i = 1; i < n; i++) {
        if (t[i] > *max)
            *max = t[i];
    }
}