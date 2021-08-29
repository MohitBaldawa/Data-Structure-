// Inserting the element at the end of the file

#include<iostream>
using namespace std;

struct Node
{
    int data;
    Node *next;

    Node(int x)
    {
        data =x;
        next = NULL;
    }
};

void printhead(Node *head){
    Node *curr = head;

    while(curr!=NULL)
    {
        cout<<(curr->data)<<" ";
        curr = curr->next;
    }
    cout<<endl;
}

Node *InsertEnd(Node *head, int data)
{
    Node *temp = new Node(data);
    Node *curr = head;

    while(curr->next!=NULL)
    {
        curr = curr->next;
    }

    curr->next = temp;
     return head;
}

int main()
{
    Node *head = new Node(10);
    head->next = new Node(20);
    head->next->next = new Node(30);
    cout<<"Before calling InsertEnd function"<<endl;
    printhead(head);

    head = InsertEnd(head, 40);
    
    cout<<"After calling InsertEnd function"<<endl;
    printhead(head);

    return 0;
}

