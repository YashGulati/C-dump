// Program to calculate and print the factorial of any user-inputted integer using function.
#include<stdio.h>
int factorial(int n) {
    int i, f=1;

    for(i=2;i<=n;i++)
        f *= i;

    return f;
}
int main() {
    int n, fact;
    printf("Enter any number: ");
    scanf("%d", &n);

    fact = factorial(n);

    printf("Factorial: %d", fact);

    return 0;
}
