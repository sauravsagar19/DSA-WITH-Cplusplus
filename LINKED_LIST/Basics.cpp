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
void Delete(node * &head,int idx){
    if(head==NULL){
        return;
    }
    if(head->next==NULL && idx==0){
        node * todelete=head;
        head=head->next;
        delete todelete;
        
    }
    node * temp=head;
    
    for(int i=0;i<idx-1;i++){
        temp=temp->next;
    }
    
    delete temp;

}
int length(node * head){
    int cnt=1;
    node * temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
        cnt++;
    }
    return cnt;
}
void Display(node * & head){
    node * temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" --> ";
        temp=temp->next;
    }cout<<endl;
}
node * reverse(node * head){
        if(head==NULL || head->next==NULL){
            return head;
        }
        node * newHead=reverse(head->next);
        head->next->next=head;
        head->next=NULL;
        return newHead;
    }
bool isPalindrome(node *head)
    {
        //Your code here
        node * newHead=reverse(head);
        node * temp1=head;
        node * temp2=newHead;
        while(temp1->next!=NULL && temp2->next!=NULL){
            if(temp1->data!=temp2->data){
                return false;
            }
            temp1=temp1->next;
            temp2=temp2->next;
        }
        return true;
    }
node * lastToFirst(node * head){
        if(head ==NULL || head->next==NULL){
            return head;
        }
        node *secondLast=NULL;
        node * last=head;
        while(last->next!=NULL){
            secondLast=last;
            last=last->next;
        }
        secondLast->next=NULL;
        last->next=head;
        head=last;

        return head;   
}
node * Kappend(node * head, int k){
    node * temp=head;
    node * newHead;
    node * newTail;
    int l=length(head);
    k=k%l;
    int cnt=1;
    while(temp->next!=NULL){
        if(cnt==l-k){
            newTail=temp;
        }
        if(cnt==l-k+1){
            newHead=temp;
        }
        temp=temp->next;
        cnt++;
    }
    newTail->next=NULL;
    temp->next=head;// we will link he last element to the head;
    return newHead;

}
int main(){
node * head=NULL;
AppendNode(head,2);
AppendNode(head,3);
AppendNode(head,4);
AppendNode(head,5);
AppendNode(head,8);
AppendNode(head,9);
// cout<<isPalindrome(head);

// Delete(head,2);
// Display(head);
// node * newHead=lastToFirst(head);
// Display(newHead);
// cout<<length(newHead);
node * newHead=Kappend(head,3);
Display(newHead);

return 0;
}