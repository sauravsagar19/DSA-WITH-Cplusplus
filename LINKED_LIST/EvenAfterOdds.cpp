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
void AppendNode(node * &head,int val){
    node * n=new node(val);
    if(head==NULL){
        head=n;
        return ; 
    }
    else{
        node * temp=head;
        while (temp->next!=NULL)
        {
            temp=temp->next; // traverse through the last node
        }
        temp->next=n; // finally at the last we are appending the node
        
    }
}
void Display(node * head){
    node * temp=head;
    while(temp!=NULL){
        cout<<"("<<temp->data<<")-->";
        temp=temp->next;
    }
    cout<<"NULL";
}
node * EvenafterOdd(node * & head){
    node * odd=head;
    node * even=head->next;
    node * evenStart=even;
    while(odd->next!=NULL && even->next!=NULL){
        odd->next=even->next;
        odd=odd->next;
        even->next=odd->next;
        even=even->next;
    }
    odd->next=evenStart;
    if(odd->next!=NULL){
        even->next=NULL;
    }
}
int main(){
node  * head=NULL;
AppendNode(head,1);
AppendNode(head,2);
AppendNode(head,3);
AppendNode(head,4);
AppendNode(head,5);
AppendNode(head,6);
Display(head);
cout<<endl;
EvenafterOdd(head);
Display(head);
return 0;
}