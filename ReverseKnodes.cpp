// VERY IMPORTANT WITH RESPECT TO INTERVIEW PURPOSE
/* 
Given a linked list and an integer K. Reverse the nodes of a linked list k at a time
and return its modified list. If the number of nodes is not a multiple of K then
left-out nodes, in the end, should remain as it is.
Idea: There are 2 cases:
1. The size of the linked list is less than K. In this case, return the list as it is.
2. The size of the linked list is more than K. Reverse the first K nodes and
recurse for the remaining list.
*/

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
void Display(Node * head){
    Node * temp=head;
    while(temp!=NULL){
        cout<<"("<<temp->data<<")-->";
        temp=temp->next;
    }
    cout<<"NULL";
}
Node * ReverseKnodes(Node * & head,int k){
    Node * prevPtr=NULL;
    Node * currentPtr=head;
    Node * nextPtr;
    int count=0;
    while(currentPtr!=NULL && count<k){
        nextPtr=currentPtr->next;
        currentPtr->next=prevPtr;

        prevPtr=currentPtr;
        currentPtr=nextPtr;
        count++;

    }
    if(nextPtr!=NULL){
        head->next=ReverseKnodes(nextPtr,k);
    }
    return prevPtr;
}
int main(){

Node * head=NULL; // abhi hamari linked list khali hai
AppendNode(head,10);
AppendNode(head,20);
AppendNode(head,30);
AppendNode(head,40);
AppendNode(head,50);
// AppendNode(head,60);
Display(head);
cout<<endl;

int k=2;
Node * newhead=ReverseKnodes(head,k);
Display(newhead);

return 0;
}