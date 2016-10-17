#include<stdio.h>
# define MAX 5
int stack[MAX];
int top = -1;
void push(){
    int x;
    if(top == MAX-1){ printf("Stack overflow: cannot push"); return; }
    printf("\nEnter the number: ");
    scanf("%d",&x);
    stack[++top] = x;
    printf("\n%d pushed to stack.",x);
}
void pop(){
    if(top == -1){ printf("Stack underflow: no item to pop"); return; }
    printf("%d popped.",stack[top--]);
}
void print(){
    int i;
    printf("Stack: ");
    for(i=0;i<=top;i++)
        printf(" %d",stack[i]);
}
int main(){
    char op;
    while(1){
        printf("\n1. Push\n2. Pop\n3. Print\n4. Quit\nEnter your choice: ");
        scanf("%d",&op);

        switch(op){
            case 1:
                push();
                break;
            case 2:
                pop();
                break;
            case 3:
                print();
                break;
            case 4:
                return 0;
        }
    }
}
