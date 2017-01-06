#include<stdio.h>
int main(){
    int arr[10] = {5,8,12,34,55,66,87,98,101,121}; // array must be sorted.
    int first=0, last=9, middle;
    int search = 101;
    while(first<=last){
        middle =(first+last)/2;
        if(arr[middle]<search)
            first = middle+1;
        else if(arr[middle]>search)
            last = middle-1;
        else{
            printf("%d found at %d", search, middle+1);
            break;
        }
    }

    return 0;
}
