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
node * ReverseK(node * & head , int key){
    node * prevptr=NULL;
    node * currptr=head;
    node * nextptr;
    int count=0;
    while(currptr!=NULL && count<key){
        nextptr=currptr->next;
        currptr->next=prevptr;

        prevptr=currptr;
        currptr=nextptr;

        count++;
    }
    if(nextptr !=NULL){
    head->next=ReverseK(nextptr,key);    
    }
    return prevptr;
}

int main(){
node * head=NULL;
Append(head,10);
Append(head,20);
Append(head,30);
Append(head,40); 
Display(head);
int k=2;
node * newHead=ReverseK(head,k);
Display(newHead);

return 0;
}