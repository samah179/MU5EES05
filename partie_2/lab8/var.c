#include "var.h"
#include <math.h>  // pour pow()

void variance(int t[], int n, float *var) {
    float somme = 0.0;
    for (int i = 0; i < n; i++) {
        somme += t[i];
    }

    float moyenne = somme / n;
    float somme_ecart = 0.0;

    for (int i = 0; i < n; i++) {
        somme_ecart += pow(t[i] - moyenne, 2);
    }

    *var = somme_ecart / n;  // variance
}