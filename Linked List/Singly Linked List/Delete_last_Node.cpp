// Delete the last node of the linked list

#include<iostream>
using namespace std;

struct Node
{
    int data;
    Node *next;

    Node (int x)
    {
        data = x;
        next = NULL;
    }
};

void printhead(Node *head)
{
    Node *curr = head;

    while(curr!=NULL)
    {
        cout<<(curr->data)<<" ";
        curr = curr->next;
    }
    cout<<endl;
}

Node *DeleteEnd(Node *head)
{
    if(head == NULL)
    return NULL;

    Node *curr = head;
    while(curr->next->next != NULL)
    {
        curr = curr->next;
    }

    delete (curr->next);
    curr->next = NULL;

    return head;
}

int main()
{
    Node *head = new Node(10);
    head->next = new Node(20);
    head->next->next = new Node(30);
    cout<<"Before calling function"<<endl;
    printhead(head);

    head = DeleteEnd(head);
    
    cout<<"After calling function"<<endl;
    printhead(head);

    return 0;
}