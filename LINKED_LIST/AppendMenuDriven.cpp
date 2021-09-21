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
    int option;

    do
    {
        cout<<endl;
        cout << "1. Append()\n"
                "2. Display()\n";
        cout << "Enter the option you want to check " << endl;
        cin >> option;
        Node *n1 = new Node();
        switch (option)
        {
        case 1:
            cout << "Append Node Operation \nEnter key & data of the Node to be Appended" << endl;
            cin >> key1;
            cin >> data1;
            n1->key = key1;
            n1->data = data1;
            s.Append(n1);
            //cout<<n1.key<<" = "<<n1.data<<endl;
            break;

        case 2:
            s.DisplayLinkedList();
            break;

        default:
            break;
        }
    } while (option != 0);

    return 0;
}