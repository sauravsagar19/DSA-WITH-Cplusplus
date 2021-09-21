// Remember we are merging two sorted Linked List
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
Node * Merge_Recursive(Node *& head1,Node * & head2){

    if(head1==NULL){
        return head2;
    }
    if(head2==NULL){
        return head1;
    }
    Node * result;
    if(head1->data < head2->data){
        result=head1;
        result->next=Merge_Recursive(head1->next, head2);
    }
    else{
        result=head2;
        result->next=Merge_Recursive(head1,head2->next);
    }
    return result;
}
Node * Merge_Iterative(Node * & head1, Node * & head2){
    Node * p1=head1;
    Node * p2=head2;

    Node * dummy=new Node(-1);
    Node * p3=dummy;

    while(p1!=NULL && p2!=NULL){
        if(p1->data<p2->data){
            p3->next=p1;
            p1=p1->next;
        }
        else{
            p3->next=p2;
            p2=p2->next;
        }
        p3=p3->next;
    }
    while(p1!=NULL){
        p3->next=p1;
        p1=p1->next;
        p3=p3->next;
    }
    while(p2!=NULL){
        p3->next=p2;
        p2=p2->next;
        p3=p3->next;
    }
    return dummy->next;
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
    Node * head1=NULL; 
    AppendNode(head1,10);
    AppendNode(head1,20);
    AppendNode(head1,30);
    AppendNode(head1,40);
    AppendNode(head1,50);
Display(head1);
cout<<endl;
 Node * head2=NULL; 
    AppendNode(head2,5);
    AppendNode(head2,50);
    AppendNode(head2,75);
    AppendNode(head2,1000);
    Display(head2);
    cout<<endl;
    Node* newHead=Merge_Recursive(head1, head2);
    Display(newHead);
return 0;
}