//Write a program to calculate LCM of two numbers
#include <stdio.h>
int main() {
    int n1, n2, max;
    printf("Enter two integer : ");
    scanf("%d %d", &n1, &n2);
    max = (n1 > n2) ? n1 : n2;
    while (1) {
        if ((max % n1 == 0) && (max % n2 == 0)) {
            printf("The LCM of %d and %d = %d", n1, n2, max);
            break;
        }
        max++;
    }
    return 0;
}