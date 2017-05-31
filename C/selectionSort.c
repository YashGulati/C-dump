#include<stdio.h>
#define MAX 5
int main() {
    int arr[MAX] = { 2, 3, 1, 4, -1 }; // you can also use for loop to scan elements.
    int i,j,temp,pos;

    for(i=0;i<MAX-1;i++) {
        pos = i+1;
        for(j=i;j<MAX;j++)
            if( arr[j] < arr[pos] ) pos = j;
        temp = arr[i];
        arr[i] = arr[pos];
        arr[pos] = temp;
    }

    for(i=0;i<MAX;i++)
        printf("%d ",arr[i]);
    
    return 0;
}
