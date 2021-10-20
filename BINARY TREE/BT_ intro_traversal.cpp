//Binary tree formation 
#include<iostream>
#include<algorithm>
#include<string>
#include<cmath>
#include<limits>
using namespace std;
struct node{
    int data;
    struct node* left;
    struct node* right;
    node(int val){
        data=val;
        left=NULL;
        right = NULL;
    }
};

// Three types of traversal 
    // 1. preOrder 
    // 2. inorder 
    // 3. post order

void preOrder(struct node * root){
    if(root==NULL){
        return ;
    }
    cout<<root->data<<" ";
    preOrder(root->left);
    preOrder(root->right);
}

void inOrder(struct node * root){
    if(root==NULL){
        return ;
    }
    inOrder(root->left);
    cout<<root->data<<" ";
    inOrder(root->right);
}
void postOrder(struct node * root){
    if(root==NULL){
        return ;
    }
    postOrder(root->left);
    postOrder(root->right);
    cout<<root->data<<" ";
}

int main(){
struct node * root= new node (1);
root->left=new node (2);
root->right=new node(3);
/* 
        1
    2       3
*/
root->left->left=new node(4);
root->left->right=new node(5);
root->right->left=new node(6);
root->right->right=new node(7);
preOrder(root);
cout<<endl;
inOrder(root);
cout<<endl;
postOrder(root);

return 0;
}