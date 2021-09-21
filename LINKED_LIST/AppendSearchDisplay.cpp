#include<iostream>
using namespace std;
class Node{
public:
    int data;
    Node * next;
    Node(int val){
        data=val; 
        next=NULL;
    }
};
void AppendNode(Node * &head,int val){
    Node * n=new Node(val);
    if(head==NULL){
        head=n;
        return ;
    }
    else{
        Node * temp=head;
        while (temp->next!=NULL)
        {
            temp=temp->next; // traverse through the last node
        }
        temp->next=n; // finally at the last we are appending the node
        
    }
}
// ITERATIVE METHOD
Node * Reverse(Node * head){
    Node * prevPointer=NULL;
    Node * currentPointer=head;
    Node * nextPtr;
    while(currentPointer!=NULL){
        nextPtr=currentPointer->next;
        currentPointer->next=prevPointer;

        prevPointer=currentPointer;
        currentPointer=nextPtr;
    }
    return prevPointer; 
}
void Display(Node * head){
    Node * temp=head;
    while(temp!=NULL){
        cout<<"("<<temp->data<<")-->";
        temp=temp->next;
    }
    cout<<"NULL";
}
int main(){

Node * head=NULL; // abhi hamari linked list khali hai
AppendNode(head,10);
AppendNode(head,20);
AppendNode(head,30);
AppendNode(head,40);
AppendNode(head,50);
Display(head);
cout<<endl;
Node * revNode=Reverse(head);
cout<<"Printing Reversed Node: "<<endl;
Display(revNode);
return 0;
}