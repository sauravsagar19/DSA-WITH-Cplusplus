#include<bits/stdc++.h>
using namespace std;
class node {
    public:
    int data;
    node * next;
    node(int val){
        data=val;
        next=NULL;
    }
};
void AppendNode(node * &head,int val){
    node * n=new node(val);
    if(head==NULL){
        head=n;
        return;
    }
    node * temp=head;
    while(temp->next!=NULL){
        temp=temp->next;

    }
    temp->next=n;
}
node* findMid(node * head){
        node * slow=head;
        node * fast=head->next;
        while(fast && fast->next){
            slow=slow->next;
            fast=fast->next->next;
        }
        return slow;
    }
node * MergeKSorted(node * & head1, node * & head2){
    if(head1==NULL){
        return head2;
    }
    if(head2==NULL){
        return head1;
    }
    node * res;
    if(head1->data < head2->data){
        res=head1;
        res->next=MergeKSorted(head1->next,head2);
    }
    else{
        res=head2;
        res->next=MergeKSorted(head1,head2->next);
    }
    return res;
}
void Display(node * & head){
    node * temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" --> ";
        temp=temp->next;
    }cout<<"NULL "<<endl;
}
int main(){
node * head1=NULL;
AppendNode(head1,1);
AppendNode(head1,2);
AppendNode(head1,3);
AppendNode(head1,4);
AppendNode(head1,5);
AppendNode(head1,6);

// node * head2=NULL;
// AppendNode(head2,3);
// AppendNode(head2,6);
// AppendNode(head2,11);
// AppendNode(head2,13);
// AppendNode(head2,15);
// AppendNode(head2,900);
// Display(head1);
// Display(head2);
// node * newhead=MergeKSorted(head1,head2);
// Display(newhead);
node * temp=findMid(head1);
cout<<temp->data;
return 0;
}