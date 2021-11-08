// Balanced Binary Tree
// for each node, abs(left height of BT - right height of BT)<=1
// we will se two sol, one with O(n^n) TC and one with O(n) TC
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
int height(node * root){
    if(root==NULL){
        return 0 ;
    }
    int lh=height(root->left);
    int rh=height(root->right);
    return max(lh,rh)+1;
}
bool isBalanced(node * root){
    if(root==NULL){
        return true;
    }
    if(isBalanced(root->left)==false){
        return false;
    }
    if(isBalanced(root->right)==false){
        return false;
    }
    int lh=height(root->left);
    int rh=height(root->right);
    if(abs(lh-rh)<=1){
        return true;
    }
    else{
        return false;
    }

}
bool Optimised_IsBalanced(node * root, int * height){
    if(root==NULL){
        return true;
    }
    int lh=0, rh=0;
      
    if(Optimised_IsBalanced(root->left, & lh)==false){
        return false;
    }
    if(Optimised_IsBalanced(root->right, & rh)==false){
        return false;
    }
    *height=max(lh,rh)+1;
    if(abs(lh-rh)<=1){
        return true;
    }
    else{
        return false;
    }
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
struct node * root1=new node (1);
root1->left=new node(2);
root1->left->left=new node (3);
root1->left->left->left=new node (4);
int height=0;
if(Optimised_IsBalanced(root1,&height)==true){
    cout<<"Balanced Tree"<<endl;
}
else{
    cout<<"UnBalanced Tree"<<endl;
}
return 0;
}