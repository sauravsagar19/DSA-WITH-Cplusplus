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
void MakeCycle(Node * & head,int pos){
    int count=1;
    Node * temp=head;
    Node * startNode;
    while(temp->next!=NULL){
        if(count==pos){
            startNode=temp;
        }
        temp=temp->next;
        count++;
    }
    temp->next=startNode;
}
bool DetectCycle(Node * &head){
  Node * slow=head;
  Node * fast=head;
  while(fast!=NULL && fast->next!=NULL){
      slow=slow->next;  // moves 1 step ahead
      fast=fast->next->next; // moves two step at a times
      if(slow==fast){
          return true;
      }

  }  
  return false;
}
void RemoveCycle(Node * &head){
    // here we assume that the cycle exist
    Node * slow=head;
    Node * fast=head;
    do
    {
        slow=slow->next; // it will move one step forward
        fast=fast->next->next;
    } while (slow!=fast);    // see the concept of detection above
    fast=head;   // we can also take slow  pointer to head(its our choice)
    while(slow->next!=fast->next){
        slow=slow->next;
        fast=fast->next;
    }
    slow->next=NULL;    // here our cycle removed
    
}
int main(){

Node * head=NULL; // abhi hamari linked list khali hai
AppendNode(head,10);
AppendNode(head,20);
AppendNode(head,30);
AppendNode(head,40);
AppendNode(head,50);

MakeCycle(head,2); 
Display(head);
cout<<DetectCycle(head)<<endl;
RemoveCycle(head);
cout<<DetectCycle(head);

return 0;
}