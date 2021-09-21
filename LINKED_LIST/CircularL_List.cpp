#include<iostream>
#include<algorithm>
#include<string>
#include<cmath>
#include<limits>
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

void InsertAtHead(node * & head,int val){

    // corner case
    node * n=new node(val);
    if(head==NULL){
        n->next=n;
        head=n;
        return;
    }
    node * temp=head;
    while(temp->next!=head){
        temp=temp->next;
    }
    temp->next=n;
    n->next=head;
    head=n;

}
void InsertAtTail(node * & head, int val){

    // Corner Case
    if(head==NULL){
        InsertAtHead(head,val);
        return ; 
    }
    node * n=new node(val);
    node * temp=head;
    while(temp->next!=head){
        temp=temp->next;
    }
    temp->next=n;
    n->next=head;
}
void DeleteAtHead(node * & head){
    node * temp=head;
    while(temp->next!=head){
        temp=temp->next;
    }
    node * toDelete=head;
    temp->next=head->next;
    head=head->next;
    delete toDelete;


}
void Deletion(node * & head, int pos){
    
    if(pos==1){
        DeleteAtHead(head);;
        return ;
    }
    node * temp=head;
    int count=1;
    while(count!=pos-1){        // 1 pos pahle tak hame traverse karna hai
        temp=temp->next;
        count++;
    }
    node * todelete=temp->next;
    temp->next=temp->next->next;
    delete todelete;
    }
bool Search(node * & head , int k){
    node * temp=head;
    if(temp->data==k){
        return temp;
    }
    while(temp->next!=head){
        if(temp->next->data==k){
            return true;
        }
        temp=temp->next;
    }
    return false;
}
void Display(node * & head){
    node * temp=head;
    do
    {
        cout<<temp->data<<"-->";
        temp=temp->next;
    } while (temp!=head);
    cout<<endl;
}
int main(){
node * head=NULL;
// InsertAtHead(head,10);
InsertAtTail(head,10);
InsertAtTail(head,20);
InsertAtTail(head,30);
InsertAtTail(head,40);
InsertAtTail(head,50);
Display(head);
// Deletion(head,1);  
// Display(head);
cout<<Search(head,10);
return 0;
}
