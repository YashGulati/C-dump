#include<stdio.h>
#define MAX 5
int main(){
    int arr[MAX] = { 2,3,1,4,-1 }; // you can also use for loop to scan elements.
    int i,j,temp;

    for(i=0;i<MAX-1;i++)
        for(j=0;j<MAX-i-1;j++)
            if( arr[j] > arr[j+1] ){
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }

    for(i=0;i<MAX;i++)
        printf("%d ",arr[i]);

}
