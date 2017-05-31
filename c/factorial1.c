// Program to calculate and print the factorial of any user-inputted integer.
#include<stdio.h>
int main() {
    int n, i, fact=1;
    printf("Enter any number: ");
    scanf("%d", &n);

    for(i=2;i<=n;i++)
        fact *= i;

    printf("Factorial: %d", fact);

    return 0;
}
