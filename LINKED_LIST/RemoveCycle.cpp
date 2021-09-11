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
void MakeCycle(node * & head, int pos){
    node * temp=head;
    node * startNode;

    int count=1;
    while(temp->next!=NULL){
        if(count==pos){
            startNode=temp;
        }
        temp=temp->next;
        count++;
    }
    temp->next=startNode;
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
void RemoveCycle(node * & head){
    node * slow =head;
    node * fast= head;
    do
    {
        slow=slow->next;
        fast=fast->next->next;

    } while (slow!=fast);
    fast=head;
    while(slow->next!=fast->next){
        slow=slow->next;
        fast=fast->next;
    }
    slow->next=NULL;
    
}
int main(){
node  * head=NULL;
Append(head,10);
Append(head,20);
Append(head,30);
Append(head,40);
Append(head,50);
Append(head,60);
Display(head);
MakeCycle(head,3);
cout<<DetectCycle(head)<<endl;;
RemoveCycle(head);
cout<<DetectCycle(head);
return 0;
}