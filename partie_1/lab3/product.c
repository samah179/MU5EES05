#include <stdio.h>

int main() {
    int x, y;
    printf("Enter two integers x and y: ");
    scanf("%d %d", &x, &y);
    printf("The product of %d and %d is %d\n", x, y, x * y);
    return 0;
}