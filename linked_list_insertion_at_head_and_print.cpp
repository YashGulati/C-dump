#include<iostream>
using namespace std;

struct Node{
    int data;
    Node* next;
} *head = NULL;

void Insert(int x){
    Node* temp = new Node;
    temp->data = x;
    temp->next = head;
    head = temp;
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
    int i,n,x;
    cout<<"Enter the number of nodes: ";
    cin>>n;
    for(i=0;i<n;i++){
        cout<<"Enter the number: ";
        cin>>x;
        Insert(x);
        Print();
    }
}
