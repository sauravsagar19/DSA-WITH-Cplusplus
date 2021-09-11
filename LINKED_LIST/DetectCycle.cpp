#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node * next;
    
    node(int val){
        data=val;
        next=NULL; 
    }
};
void Append(node * & head , int val){
    node * n= new node(val);
    if(head==NULL){
        head=n;
        return ;
    }
    node * temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=n;
}
void Display(node * &  head){
    node * temp=head;
    while(temp!=NULL){
        cout<<temp->data<<"-->";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;
}
bool DetectCycle(node * & head){
    node * slow=head;
    node * fast =head;

    while(fast != NULL &&  fast->next !=NULL){
        slow=slow->next;
        fast=fast->next->next;

        if(fast==slow){
            return true;
        }
    }
    return false;
}
int main(){
    node * head=NULL;
    Append(head,10);
    Append(head,20);
    Append(head,30);
    Append(head,40);
    Append(head,50);
    Append(head,40);
    Append(head,30);
    Display(head);
    cout<<DetectCycle(head);
    return 0;
}