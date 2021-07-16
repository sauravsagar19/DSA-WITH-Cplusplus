#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    int key;
    Node *next;
    Node()
    {
        data = 0;
        key = 0;
        next = NULL;
    }
    Node(int k, int d)
    {
        data = d;
        key = k;
    }
};
class SinglyLinkedList{
    public:
    Node * head;
    SinglyLinkedList(){
        head=NULL;
    }
    SinglyLinkedList(Node * n){
        head=n;
    }
    Node * NodeExist(int k){
        Node * temp=NULL;
        Node *ptr=head;
        while(ptr!=NULL){
            if(ptr->key==k){
                temp=ptr;
            }
            ptr=ptr->next;
        }
        return temp;
    }
    
    void Append(Node * n){
        if(NodeExist(n->key)!=NULL){
            cout<<"Node Already exist"<<endl;
        }
        else{
            if(head==NULL){
                head=n;
                cout<<"Node appened "<<endl;
            }
            else{
                Node * ptr=head;
                while(ptr->next!=NULL){
                    ptr=ptr->next;
                }
                ptr->next=n;
                cout<<"Node APPENDED"<<endl;
            }
            
        }
    }

    void insertNode(int k,Node *n){
        Node *checkPtr=NodeExist(k); // if it gives Null than there is no node with 'k' key(to hmlog New node insert kaha karenge)
        if(checkPtr==NULL){
            cout<<"Error-\nNo Node with such key..(where to insert)"<<endl;
        }
        else{
            if(NodeExist(n->key)!=NULL){
                cout<<"Your new Node Key matches "<<endl; 
            }
            else{
                n->next=checkPtr->next;
                checkPtr->next=n;
                cout<<"Node inserted Successfully :) "<<endl;
            }
        }
    }
    void DsiplayNode(){
        if(head==NULL){
            cout<<"No Node found....";
        }
        else{
            Node * checkptr=head;
            while(checkptr!=NULL){
                cout<<"("<<checkptr->key<<","<<checkptr->data<<")-->";
                checkptr=checkptr->next;
            }


        }
    }

};
int main()
{
    SinglyLinkedList s;
    int data1;
    int key1;
    for(int i=0;i<4;i++){
        Node * n1=new Node();
        cout<<"Enter key and data : ";
        cin>>key1>>data1;
        n1->key=key1;
        n1->data=data1;
        s.Append(n1);
        
    }
    cout<<"Before insertion....."<<endl;
    cout<<endl;
    s.DsiplayNode();
    cout<<endl;
    int keyInsert,k;
    cout<<"Enter the key of node after you wanna insert(-1 to Exit)"<<endl;
    cin>>keyInsert;
    while (keyInsert!=-1)
    {
        Node * nNew =new Node();
        cout<<"Enter the key and Data of new Node: ";
        cin>>key1>>data1;
        nNew->key=key1;
        nNew->data=data1;
        s.insertNode(keyInsert,nNew);
         cout<<"Enter the key of node after you wanna insert(-1 to Exit)"<<endl;
        cin>>keyInsert;
    }
    
    cout<<"After insertion......."<<endl;
     s.DsiplayNode();


    return 0;
}