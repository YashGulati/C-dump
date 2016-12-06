// Count the number of vowels in a string using switch statements
#include<stdio.h>
#include<string.h>
int main(){
    char str[50];
    int vow=0,i;
    printf("Enter a string': ");
    gets(str);
    for(i=0;i<strlen(str);i++)
        switch(str[i]){
            case 'A':
            case 'a':
            case 'E':
            case 'e':
            case 'I':
            case 'i':
            case 'O':
            case 'o':
            case 'U':
            case 'u':
                vow++;
        }
    printf("%d",vow);
}
