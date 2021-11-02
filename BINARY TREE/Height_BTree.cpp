// Height and Diameter of a binary tree
#include<iostream>
#include<algorithm>
#include<string>
#include<cmath>
#include<limits>
using namespace std;
struct node {
    int data;
    struct node * left ;
    struct node * right;
    node(int val){
        data=val;
        left =NULL;
        right=NULL;
    }
};
int Height_BinaryTree(node * root){
    if(root==NULL){
        return 0;
    }
    int lHeight=Height_BinaryTree(root->left);
    int rHeight=Height_BinaryTree(root->right);
    return max(lHeight,rHeight)+1;
}
int Diameter_BinaryTree(node * root){

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
cout<<Height_BinaryTree(root);
return 0;
}