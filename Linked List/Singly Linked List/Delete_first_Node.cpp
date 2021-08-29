// deleting the first node or the head of the singly linked list

#include<iostream>
using namespace std;

struct Node{
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

Node *DeleteBegin(Node *head)
{
    if (head == NULL)
    return NULL;

    if(head->next == NULL)
    return NULL;

    Node *temp = head;
    head = head->next;
    delete temp;

    return head;
}

int main()
{
    Node *head = new Node(10);
    head->next = new Node(20);
    head->next->next = new Node(30);
    cout<<"Before calling function"<<endl;
    printhead(head);

    head = DeleteBegin(head);
    
    cout<<"After calling function"<<endl;
    printhead(head);

    return 0;
}