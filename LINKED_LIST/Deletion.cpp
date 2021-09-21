#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node * next;
    Node(){
        data=0;
        next=NULL;
    }
    Node(int val){
        data=val;
        next=NULL;
    }
};
void AppendNode(Node * & head,int val){
    Node * n=new Node(val);
    if(head==NULL){
        head=n;
        return ;
    }
    Node *temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=n;
}
void deleteAtHead(Node * & head){
    Node * todelete=head;
    head=head->next;
    delete todelete;
}
void Deletion(Node * & head,int val){
    if(head==NULL){
        return;
    }

    if(head->data==val){   // it means there is only one node (head itself)
    deleteAtHead(head);
    return;
    
    }

    Node * temp=head;
    while(temp->next->data!=val){      /* temp->next will be pointing to the node we want to delete
                                        temp->next->data will be the value of the node we want to delete*/

                                        /*  suppose we want to delete nth Node
                                        so here temp is the (n-1) node */
        temp=temp->next;
    }
    Node * todelete=temp->next;
    temp->next=temp->next->next;     // here we are linking (n-1) node to (n+1)
    delete todelete; // we wanted to delete the node which is stored in the next of temp
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
Node * head=NULL;
AppendNode(head,10);
AppendNode(head,20);
AppendNode(head,30);
AppendNode(head,40);
AppendNode(head,50);
cout<<"Before Deletion...."<<endl;
Display(head);
deleteAtHead(head); // if we want to delete only head
Deletion(head,50);
cout<<endl<<"After Deletion"<<endl;
Display(head);


return 0;
}