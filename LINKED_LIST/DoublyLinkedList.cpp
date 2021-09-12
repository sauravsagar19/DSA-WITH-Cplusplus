#include <iostream>
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
void DeleteAtHead(node *&head)
{
    node *todelete = head;
    head = head->next;
    head->prev = NULL;

    delete todelete;
}
void Delete(node *&head, int pos)
{
    node *temp = head;
    int count = 1;
    if (pos == 1)
    {
        DeleteAtHead(head);
        return;
    }
    while (temp != NULL && count != pos)
    {
        temp = temp->next;
        count++;
    }
    temp->prev->next = temp->next;
    if (temp->next != NULL)
    {
        temp->next->prev = temp->prev;
    }
    delete temp;
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
node * Kappend(node *&head, int k)
{
    node *newTail;
    node *newHead;
    node *tail = head;
    int l = Length(head);
    k=k%l;
    int count = 1; // to keep track of the k
    while (tail->next != NULL)
    {
        if (count == l - k)
        {
            newTail = tail;
        }
        if (count ==l - k + 1)
        {
            newHead = tail;
        }
        tail = tail->next;
        count++;
    }
    newTail->next=NULL;
    tail->next=head;

    return newHead;
}
int main()
{
    node *head = NULL;
    InsertionAtTail(head, 10);
    InsertionAtTail(head, 20);
    InsertionAtTail(head, 30);
    InsertionAtTail(head, 40);
    InsertionAtTail(head, 50);
    InsertionAtTail(head, 60);
    InsertionAtTail(head, 70);
    // Display(head);
    InsertAtHead(head, 1000);
    // Display(head);
    // Delete(head, 5);
    Display(head);
    // Length(head);
    node * newHead=Kappend(head,3);
    // Kappend(newHead,3);
    Display(newHead); 
    return 0;
}