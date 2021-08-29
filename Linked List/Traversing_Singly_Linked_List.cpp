//Creation of linked list 
#include <iostream>
using namespace std; 

struct Node {
    int data;
    Node *next;

    Node(int x)
    {
        data = x;
        next = NULL;
    }
};

// function for traversing   
void printhead(Node *head){
    Node *curr = head;

    while(curr!=NULL)
    {
        cout<<(curr->data)<<" ";
        curr = curr->next;
    }
    cout<<endl;
}



int main(){
    Node *head = new Node(10);
    head->next = new Node(30);
    head->next->next = new Node(40);
    printhead(head);
}



