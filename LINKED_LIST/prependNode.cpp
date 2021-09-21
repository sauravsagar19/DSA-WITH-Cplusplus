#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    int key;
    Node * next;
    Node(){
         data=0;
         key=0;
         next=NULL;
    }
    Node(int k,int d){
        key=k;
        data=d;
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
        Node * temp;
        Node * ptr=head;
        while(ptr!=NULL){
            if(ptr->key==k){
                temp=ptr;
            }
            ptr=ptr->next;
        }
        return temp;
    }
    void Append(Node *n)
    {
        if (NodeExist((n->key) != NULL))
        {
            cout << "Node already Exist... Cant add any more " << endl;
        }
        else
        {
            if (head == NULL)
            {
                head = n;
                cout << "Node Appended..." << endl;
            }
            else
            {
                Node *ptr = head;
                while (ptr->next != NULL)
                {
                    ptr = ptr->next;
                }
                ptr->next = n;
                cout << "Node Appended..." << endl;
            }
        }
    }

    void Prepend(Node * n){
        if(NodeExist(n->key)!=NULL){
            cout<<"Node already exist.."<<endl;
        }
        else{
            n->next=head;
            head=n;
            cout<<"Node Prependeed....."<<endl;
        }
    }
      void DisplayLinkedList()
    {
        if (head == NULL)
        {
            cout << "Empty linkedList...\n Status:- No node found " << endl;
        }
        else
        {
            Node *temp = head;
            cout << "Printing the values...." << endl;
            while (temp != NULL)
            {
                cout << "(" << temp->key << "," << temp->data << ")--->";
                temp = temp->next;
            }
        }
    }
};
int main(){
    SinglyLinkedList s;
    int data1;
    int key1;
    for(int i=0;i<4;i++){
        Node * n1=new Node();
        cout<<"Enter data and key of node: ";
        cin>>data1>>key1;
        n1->data=data1;
        n1->key=key1;
        s.Append(n1);
}
s.DisplayLinkedList();
return 0;
}