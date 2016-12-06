#include<iostream>
using namespace std;

struct Node{
    int data;
    Node* next;
} *head = NULL;

void Insert(int x, int n){
    Node* temp = new Node;
    temp->data = x; temp->next = NULL;
    if(n == 1){ temp->next = head; head = temp; return; }
    Node* temp2 = head;
    for(int i=1;i<n-1;i++) temp2 = temp2->next;
    temp->next = temp2->next;
    temp2->next = temp;
}

void Print(){
    Node* temp = head;
    while(temp != NULL){
        cout<<" "<<temp->data;
        temp = temp->next;
    }
    cout<<endl;
}

int main(){
    Insert(5,1);
    Insert(6,2);
    Insert(7,1);
    Insert(8,2);
    Print();
}
