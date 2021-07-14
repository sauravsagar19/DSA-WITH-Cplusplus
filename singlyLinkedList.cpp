#include<iostream>
using namespace std;
class Node{
    public:
    int key;
    int data;
    Node * next;
    Node(){
        key=0;
        data=0;                             // default Constructor
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

    // Checking our first operation
    //LinkedList traversing(checking eaxh element)
    Node * nodeExist(int k){
        Node * temp=NULL;
        Node * ptr=head;
        while(ptr!=NULL){    // in first node, ptr=head(its Not NULL) so while loop will be executed
            if(ptr->key==k){     // now if ptr points to key which we are lookking for than it will be assigned to temp
                                // and displayed
                temp=ptr;  
            }
            ptr=ptr->next;    // if we ptr->key not equal to k means it could not find, so we have to shift to next node
                                // and then ptr will point to that node address (it will not point to head)
        }
        return temp;           // finally we displays the temp
    }

    // APPEND(adding node at last)
    void AppendNode(Node * n){
        if(nodeExist((n->key)!=NULL)){
         cout<<"Node already Exist... Try with different Number: "<<endl;
        }
        else{
            if(head==NULL){
                head=n;
                cout<<"Node Appended.."<<endl;
            }
            else{
                Node * ptr=head;
                while(ptr->next!=NULL){ // agar ptr->next=NULL .. iska matlb wo linked list ka sbse last wala node hai, aur usi me hmlog 
                                        // ko append karna hai. thatswhy while loop ka ye part nahi execute hoga
                                        // ptr->next=n wala part run hoga .. joki finally last wale node ke next wale compartment 
                                        // me 'n' ka address store kar dega
                        ptr=ptr->next;           //traversing through linked list
                }
                ptr->next=n;
                cout<<"Node appended...."<<endl;

            }
        }

        
    }
    // PREPEND NODE
    void prependNode(Node * n){
        if(nodeExist(n->key)!=NULL){
            cout<<"Node already present....Try different node.."<<endl;
        }
        else{
            n->next=head; // first we made a link (we passed the address of head node in the next compartment of node n)
            head=n;// then we made that prepended node as head
            cout<<"Node prepended.."<<endl;
        }
    }
    // INSERTION
    void insertNodeAfter(int k,Node * n){
        Node * ptr=nodeExist(k); // if it returns Null, than no node with value k 
        if(ptr==NULL){
            cout<<"No node with that key"<<endl;
        }
        else{
            if(nodeExist(n->key)!=NULL){
                cout<<"key alredy exist... we can not insert "<<endl;
            }
            else{
                // suppose we want to insert a node after node n2
                // first we will traverse till node n2, then at that time our ptr will be pointing to the node n2
                // and the next pointer of the node n2 will be having the addresss of node n3
                n->next=ptr->next; // so basically here we are giving the address of node n3 to our new node n4
                // as our n->next is assigned with value of ptr->next and we know that ptr->next have the address of n3
                ptr->next=n; // now we are giving ptr->next , the address of n4(i.e we are linking n2 to n4)
                cout<<"Node inserted...."<<endl;
            }
        }
    }
    void deleteNodeByKey(int k){
        if(head==NULL){
            cout<<"SinglyLinked list is empty.. no Node to delete.."<<endl;
        }
        else if(head!=NULL){
            if(head->key==k){
                head=head->next; // if we find that we have to delete head node, then head has to shift na
                cout<<"Node UNLINKED with key value "<<k<<endl;
            }
            else{
                Node * temp=NULL;
                Node * preptr=head;
                Node * currentptr=head->next;
                while(currentptr!=NULL){
                    if(currentptr->key==k){
                        temp=currentptr;
                        currentptr=NULL;  // now currentptr is empty
                    }
                    else{
                        preptr=preptr->next;
                        currentptr=currentptr->next; //it will traverse through the list

                    }
                }
                if(temp!=NULL){
                    preptr->next=temp->next; // we linked preptr to temp
                    cout<<"Node UNLINKED with key value: "<<k<<endl;
                }
                else{
                    cout<<"Node doesnot exist with such key..."<<endl;
                }
            }
        }
    }
    // DATA UPDATION
    void updateValueByKey(int k,int d){
        Node *ptr=nodeExist(k);
        if(ptr!=NULL){
            ptr->data=d;
            cout<<"Data Updated Successfully..."<<endl;
        }
        else{
            cout<<"No data with key value "<<k<<"found "<<endl;
        }
    }
    
    // Printing linkedList
    void printList(){
        if(head==NULL){
            cout<<"No nodes found.."<<endl;
        }
        else{
            Node *temp=head;
            cout<<"Printing the values...."<<endl;
            while(temp!=NULL){
                cout<<"("<<temp->key<<","<<temp->data<<")-->";
                temp=temp->next;
            }

        }
    }

}; 

int main() {

  SinglyLinkedList s;
  int option;
  int key1, k1, data1;
  do {
    cout << "\nWhat operation do you want to perform? Select Option number. Enter 0 to exit." << endl;
    cout << "1. appendNode()" << endl;
    cout << "2. prependNode()" << endl;
    cout << "3. insertNodeAfter()" << endl;
    cout << "4. deleteNodeByKey()" << endl;
    cout << "5. updateNodeByKey()" << endl;
    cout << "6. print()" << endl;
    cout << "7. Clear Screen" << endl << endl;

    cin >> option;
    Node * n1 = new Node();
    //Node n1;

    switch (option) {
    case 0:
      break;
    case 1:
      cout << "Append Node Operation \nEnter key & data of the Node to be Appended" << endl;
      cin >> key1;
      cin >> data1;
      n1 -> key = key1;
      n1 -> data = data1;
      s.AppendNode(n1);
      //cout<<n1.key<<" = "<<n1.data<<endl;
      break;

    case 2:
      cout << "Prepend Node Operation \nEnter key & data of the Node to be Prepended" << endl;
      cin >> key1;
      cin >> data1;
      n1 -> key = key1;
      n1 -> data = data1;
      s.prependNode(n1);
      break;

    case 3:
      cout << "Insert Node After Operation \nEnter key of existing Node after which you want to Insert this New node: " << endl;
      cin >> k1;
      cout << "Enter key & data of the New Node first: " << endl;
      cin >> key1;
      cin >> data1;
      n1 -> key = key1;
      n1 -> data = data1;

      s.insertNodeAfter(k1, n1);
      break;

    case 4:

      cout << "Delete Node By Key Operation - \nEnter key of the Node to be deleted: " << endl;
      cin >> k1;
      s.deleteNodeByKey(k1);

      break;
    case 5:
      cout << "Update Node By Key Operation - \nEnter key & NEW data to be updated" << endl;
      cin >> key1;
      cin >> data1;
      s.updateValueByKey(key1, data1);

      break;
    case 6:
      s.printList();

      break;
    case 7:
      system("cls");
      break;
    default:
      cout << "Enter Proper Option number " << endl;
    }

  } while (option != 0);

  return 0;
}