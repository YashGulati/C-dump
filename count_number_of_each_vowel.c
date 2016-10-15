// Count the number of each vowel in a string using switch statements
#include<stdio.h>
int main(){
    char str[50];
    int a=0,e=0,i=0,o=0,u=0,j;
    printf("Enter a string: ");
    gets(str);
    for(j=0;str[j]!='\0';j++)
        switch(str[j]){
            case 'A':
            case 'a':
                a++;
                break;
            case 'E':
            case 'e':
                e++;
                break;
            case 'I':
            case 'i':
                i++;
                break;
            case 'O':
            case 'o':
                o++;
                break;
            case 'U':
            case 'u':
                u++;
                break;
        }
    printf("a: %d\ne: %d\ni: %d\no: %d\nu: %d\n",a,e,i,o,u);
}
