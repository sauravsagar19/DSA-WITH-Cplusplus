// For loop
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
class SinglyLinkedList
{
public:
    Node *head;
    SinglyLinkedList()
    {
        head = NULL;
    }
    SinglyLinkedList(Node *n)
    {
        head = n;
    }
    Node *NodeExist(int k)
    {
        Node *temp = NULL;
        Node *ptr = head;
        while (ptr != NULL)
        {
            if (ptr->key == k)
            {
                temp = ptr;
            }
            ptr = ptr->next;
        }
        return temp; // if value foud then temp will return something if not, temp will have NULL
    }
    // APPEND
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
    void deleteNode(int k){
      
        if(head==NULL){
            cout<<"Linked List is empty.."<<endl;
        
        }
        else if(head!=NULL){
             if(head->key==k){
                head=head->next; // if we find that we have to delete head node, then head has to shift na
                cout<<"Node UNLINKED....."<<endl;
            }
            else{
                  Node * temp=NULL;
                  Node *prevPtr=head;
                  Node *currentPtr=prevPtr->next;
                  while(currentPtr!=NULL){
                      if(currentPtr->key==k){
                          temp=currentPtr;
                          currentPtr=NULL;    //Now currentPtr is Null
                      }
                      else{
                          prevPtr=prevPtr->next;
                          currentPtr=currentPtr->next;
                      }
                }
                if(temp!=NULL){
                   prevPtr->next =temp->next;
                   cout<<"Node UNLINKED...."<<endl;
                }
                else{
                    cout<<"Node doesnt exist with such key.... what to delete..."<<endl;
                }
            }
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
int main()
{
    SinglyLinkedList s;
    int data1;
    int key1;
    for(int i=0;i<4;i++){
        Node * n1=new Node();
        cout<<"Enter key and data of node: ";
        cin>>key1>>data1;
        n1->key=key1;
        n1->data=data1;
        s.Append(n1);
}
cout<<"Before deletion"<<endl;
s.DisplayLinkedList();
int kDel;
    do 
    {
    cout<<endl<<"Key of Node you want to delete(Enter 0 to Exit)...."<<endl;
    cin>>kDel;
    s.deleteNode(kDel); /* code */
    } while (kDel!=0);
cout<<"After Deletion"<<endl;
s.DisplayLinkedList();
return 0;
}