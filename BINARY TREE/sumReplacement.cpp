//Replace the value of each node with the sum of all substree nodes and itself

#include<iostream>
#include<algorithm>
#include<string>
#include<cmath>
#include<limits>
using namespace std;
struct node{
    int data;
    struct node * left;
    struct node * right;
    node(int val){
        data=val;
        left=NULL;
        right=NULL;
    }
};
void SumReplacement(node * root){
    if(root==NULL){
        return ;
    }
    SumReplacement(root->left);
    SumReplacement(root->right);
    if(root->left!=NULL){
        root->data+=root->left->data;
    }
    if(root->right!=NULL){
        root->data+=root->right->data;
    }
}
void PreOrder(node * root){
    if(root==NULL){
        return ;
    }
    cout<<root->data<<" ";
    PreOrder(root->left);
    PreOrder(root->right);
}
int main(){
struct node * root= new node (1);
root->left=new node (2);
root->right=new node(3);
root->left->left=new node(4);
root->left->right=new node(5);
root->right->left=new node(6);
root->right->right=new node(7);
/* 
        1
    2       3
4      5  6    7
*/
PreOrder(root);
cout<<endl;
SumReplacement(root);
PreOrder(root);
cout<<endl;
return 0;
}