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

int main(){
node  * head=NULL;
Append(head,10);
Append(head,20);
Append(head,30);
Append(head,40);
 
// Display(head);
MakeCycle(head,2);
// Display(head);

return 0;
}