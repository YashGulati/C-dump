#include<stdio.h>
#define MAX 5
int main(){
    int arr[MAX] = { 2,3,1,4,-1 }; // you can also use for loop to scan elements.
    int i,j,temp,pos;

    for(i=1;i<MAX;i++)
    for(j=i;j>0 && arr[j-1] > arr[j] ;j--){
        temp = arr[j];
        arr[j] = arr[j-1];
        arr[j-1] = temp;
    }


    for(i=0;i<MAX;i++)
        printf("%d ",arr[i]);

}
