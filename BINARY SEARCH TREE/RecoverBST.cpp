#include<bits/stdc++.h>
using namespace std;
struct node
{
    int data;
    node * left;
    node * right;
    node(int val){
        data=val;
        left=NULL;
        right=NULL;
    }
};
void inorder(node * root){
    if(root==NULL){
        return;
    }
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}
void calPointer(node *root,node ** first,node ** mid, node ** last,node ** prev){
    if(root==NULL){
        return;
    }
    // Now we go by in-order fashion
    // first: root->left, root, root->right

    // root->left
    calPointer(root->left,first,mid,last,prev);
    if(*prev!=NULL && root->data < (*prev)->data){
        // check whether its first time vilidation
        if((*first)==NULL){
            *first=*prev;
            *mid=root;
        }else{
            *last=root;
        }

    }
    *prev=root;
    calPointer(root->right,first,mid,last,prev);
}
void recover(node * root){
    node * first=NULL;
    node * mid=NULL;
    node * last=NULL;
    node * prev=NULL;

    calPointers(root,&first,&mid,&last,&prev);
    if(first && last)
    {
        swap(&(first->data),&(last->data));
    }
    else if(first && mid){
        swap(&(first->data),&(mid->data));
    }
}
int main(){
node * root1=new node(11);
root1->left=new node(8);
root1->right=new node(10);
inorder(root1);
recover(root1);
inorder(root1);
return 0;
}