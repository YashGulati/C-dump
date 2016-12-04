#include<iostream>
using namespace std;
int main(){
    int num;
    char single_digits[10][10] = { "zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine" };
    char double_digits[10][10] = { "ten", "eleven", "twelve", "thirteen", "fourteen", "fifteen", "sixteen", "seventeen", "eighteen", "nineteen" };
    char tens_multiple[10][10] = { "", "", "twenty", "thirty", "forty", "fifty", "sixty", "seventy", "eighty", "ninety" };
    cout<<"Enter the Number: ";
    cin>>num;
    cout<<endl;

    if(num<0 || num>999){ cout<<"Number should be between 0 to 999"; return 0; }
    if(num == 0){ cout<<"zero"; return 0; }
    if(num/100 != 0) cout<<single_digits[num/100]<<" hundred";
    num %= 100;
    if(num>=10 && num<=19 ){ cout<<" "<<double_digits[num%10]; return 0; }
    if(num/10!=0) cout<<" "<<tens_multiple[num/10];
    if(num%10!=0) cout<<" "<<single_digits[num%10];
    return 0;
}
