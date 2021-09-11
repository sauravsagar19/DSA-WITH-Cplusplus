#include <iostream>
using namespace std;
class node
{
public:
    int data;
    node *next;

    node(int val)
    {
        data = val;
        next = NULL;
    }
};

void Append(node *&head, int val)
{
    node *n = new node(val);
    if (head == NULL)
    {
        head = n;
        return;
    }

    node *temp = head;

    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = n;
}

void InserAtHead(node * & head, int val){
    node * n=new node(val);
    n->next=head;
    head=n;
}

void Display(node * &  head){
    node * temp=head;
    while(temp!=NULL){
        cout<<temp->data<<"-->";
        temp=temp->next;
    }
}

void Searching( node * head, int key){
    node * temp=head;

    while(temp!=NULL){
        if(temp->data==key){
            cout<<"Found!";
            return ;
        }
        temp=temp->next;
    }
    cout<<"Not Found!";
}

void deleteAtHead(node * & head){
    node * todeletee=head;
    head=head->next;
    delete todeletee;
    
}
void Delete(node * & head, int key){
    if(head==NULL){
        return ;
    }
    if(head->next==NULL){
        deleteAtHead(head);
        return ;
    }
    
    node * temp=head;
    while(temp->next->data!=key){
        temp=temp->next;
    }
    node * todelete=temp->next;
    temp->next=temp->next->next;
    delete todelete;

}

// Reverse Linked List
// 1) Recursively
// 2) iterative Method

// Recursively

node * ReverseRecursively(node * & head){
    if(head==NULL || head->next==NULL){
        return head;
    }

    node * newHead=ReverseRecursively(head->next);
    head->next->next=head; //( linking first <-- second)
    head->next=NULL; // declaring it as last node 
    return newHead;
}

// Iterative Method 
node * ReverseIterative(node * & head){
    node * prevptr=NULL;
    node * currptr=head;
    node * nextptr;

    while(currptr!=NULL){
        nextptr=currptr->next;
        currptr->next=prevptr;

        prevptr=currptr;
        currptr=nextptr;
    }
    return prevptr; // here our prevptr is the new head
                 // thats why we are returning it
}
int main()
{
    node *head = NULL;
    Append(head, 10);
    Append(head, 20);
    Append(head, 30);
    Append(head, 40);
    Append(head, 50);
    Append(head, 60);
    // InserAtHead(head,100);
    // Display(head);
    // cout<<endl;
    // Searching(head,30);
    // node* newHead= ReverseRecursively(head);
    // node * newHead=ReverseIterative(head);
    // Delete(head,10);
    Display(head);
    cout<<endl;
    deleteAtHead(head);
    Display(head);
    return 0;
}