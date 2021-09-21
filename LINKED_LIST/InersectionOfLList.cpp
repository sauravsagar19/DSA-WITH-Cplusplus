#include<iostream>
#include<algorithm>
#include<string>
#include<cmath>
#include<limits>
using namespace std;
class node
{
public:
    int data;
    node *prev;
    node *next;
    node(int val)
    {
        data = val;
        prev = NULL;
        next = NULL;
    }
};
void InsertAtHead(node *&head, int val)
{
    node *n = new node(val);
    // node * temp=head;
    n->next = head;
    if (head != NULL)
    {

        head->prev = n; // if head=NULL then we can not access the prev ptr, thats why we wrote the if Condn
    }
    head = n; // finally head is assigned to n.
}
void InsertionAtTail(node *&head, int val)
{

    if (head == NULL)
    { // Corner case
        InsertAtHead(head, val);
        return;
    }
    node *n = new node(val);
    node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = n; // next ptr linked
    n->prev = temp; // prev pointer linked
}
void Display(node *&head)
{
    node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " <--> ";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}
void Intersect(node * & head1, node * & head2, int pos){
    node * temp1=head1;
    pos--;
    while(pos--){
        temp1=temp1->next;
    }
    node * temp2=head2;
    while(temp2->next!=NULL){
        temp2=temp2->next;
    }
    temp2->next=temp1;
}
int Length(node *&head)
{
    int len = 0;
    node *temp = head;
    while (temp != NULL)                   // we had to check the length of the linked List in order to 
                                        // set our pointerts perfectly at their position
    {
        len++;
        temp = temp->next;
    }
    return len;
}
int CheckIntersection(node * head1,node * & head2){
    int l1=Length(head1);
    int l2=Length(head2);
     
    int d=0;

    node * ptr1;
    node * ptr2;
    if(l1>l2){
        d=l1-l2;
        ptr1=head1;
        ptr2=head2;
    }
    else{
        d=l2-l1;
        ptr1=head2;
        ptr2=head1;
        
    }
    while(d!=0){
        ptr1=ptr1->next;
        if(ptr1==NULL){
            return -1;
        }
        d--;
    }
    while(ptr1!=NULL && ptr2!=NULL){
        if(ptr1==ptr2){
            return ptr1->data;    // either ptr1->data or ptr2->data;
        }
        ptr1=ptr1->next;
        ptr2=ptr2->next;
    }
    return -1;

}
int main(){
int arr[6]={10,20,30,40,50,60};
node * head1=NULL;
for(int i=0;i<6;i++){
    InsertionAtTail(head1,arr[i]);
}
Display(head1);
node * head2=NULL;
InsertionAtTail(head2,200);
InsertionAtTail(head2,400);
InsertionAtTail(head2,30);
InsertionAtTail(head2,40);
InsertionAtTail(head2,800);
Display(head2);
Intersect(head1, head2,3);
cout<<CheckIntersection(head1, head2);
return 0;
}