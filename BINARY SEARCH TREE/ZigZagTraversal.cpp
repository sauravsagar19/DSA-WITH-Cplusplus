// Using two stact method
#include <bits/stdc++.h>
using namespace std;
struct node
{
    int data;
    node *left;
    node *right;
    node(int val)
    {
        data = val;
        left = NULL;
        right = NULL;
    }
};
void ZigZag(node *root)
{
    if(root==NULL){
        return;
    }
    stack<node *> curr;
    stack<node *> next;
    bool LtoR = true;
    curr.push(root);
    while (!curr.empty())
    {
        node *temp = curr.top();
        curr.pop();
        if (temp)
        {
            cout << temp->data << " ";

            if (LtoR)
            {
                if (temp->left)
                {

                    next.push(temp->left);
                }
                if (temp->right)
                {
                    next.push(temp->right);
                }
            }
            
            else{

                if (temp->right)
                {

                    next.push(temp->right);
                }
                if (temp->left)
                {
                    next.push(temp->left);
                }
            }
            
        }
        if (curr.empty())
        {
            LtoR = !LtoR;
            swap(curr, next);
        }
    }
}
int main()
{
    node * root=new node(12);
    root->left=new node(9);
    root->right=new node(15);
    root->left->left=new node(5);
    root->left->right=new node(10);
    ZigZag(root);
    return 0;
}