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

void printhead(Node *head){
    Node *curr = head;

    while(curr!=NULL)
    {
        cout<<(curr->data)<<" ";
        curr = curr->next;
    }
    cout<<endl;
}

// function for adding the node at the begening of the head
Node *InsertBegin(Node *head, int data)
{
    Node *temp = new Node(data);

    if(head == NULL)
    return temp;

    temp->next = head; // adding the refference of the head to the temp next

    return temp;   // returning temp as the new head
}

int main(){
    Node *head = new Node(10);
    head->next = new Node(30);
    head->next->next = new Node(40);
    cout<<"Before calling InsertBeging Function"<<endl;
    printhead(head);

    head = InsertBegin(head, 5);
    cout<<"After calling InsertBeging Function"<<endl;
    printhead(head);



    return 0;
}

/* Output 
Before calling InsertBeging Function
10 30 40
After calling InsertBeging Function
5 10 30 40   */



