#include<stdio.h>
struct Node {
     int data;
     struct Node *next;
  } *head=NULL;

void insertAtHead(int x) {
    struct Node *temp = (struct Node*) malloc( sizeof(struct Node) );
    temp->data = x;
    if(head==NULL){
        head = temp;
        temp->next = NULL;
        return;
    }
    temp->next = head;
    head = temp;
}

void print() {
    struct Node *temp = head;
    while(temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}

int main() {
    int n, x, i;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    for(i=0;i<n;i++) {
        printf("Enter a number: ");
        scanf("%d", &x);
        insertAtHead(x);
        print();
    }
}
