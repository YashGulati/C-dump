#include<stdio.h>
#include<conio.h>
int main(){
    int num;
    char single_digits[10][10] = { "zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine" };
    char double_digits[10][10] = { "ten", "eleven", "twelve", "thirteen", "fourteen", "fifteen", "sixteen", "seventeen", "eighteen", "nineteen" };
    char tens_multiple[10][10] = { "", "", "twenty", "thirty", "forty", "fifty", "sixty", "seventy", "eighty", "ninety" };
    printf("Enter the Number: ");
    scanf("%d",&num);
    printf("\n");

    if(num<0 || num>999){ printf("Number should be between 0 to 999"); return 0; }
    if(num == 0){ printf("zero"); return 0; }
    if(num/100 != 0) printf("%s hundred", single_digits[num/100]);
    num %= 100;
    if(num>=10 && num<=19 ){ printf(" %s",double_digits[num%10]); return 0; }
    if(num/10!=0) printf(" %s",tens_multiple[num/10]);
    if(num%10!=0) printf(" %s",single_digits[num%10]);
    return 0;
}
