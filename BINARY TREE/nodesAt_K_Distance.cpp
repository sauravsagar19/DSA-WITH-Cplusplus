#include<iostream>
#include<algorithm>
#include<string>
#include<cmath>
#include<limits>
using namespace std;
struct node{
    int data;
    struct node *left;
    struct node *right;
    node(int val){
        data=val;
        left=NULL;
        right=NULL;
    }
};
void PrintSubTreeNode(node * root,int k){
    if(root==NULL ||k<0){
        return;
    }
    if(k==0){
        cout<<root->data<<" ";
        return ;
    }
    PrintSubTreeNode(root->left,k-1);
    PrintSubTreeNode(root->right,k-1);
}
//  case 2: check for Ansestors
int PrintNodesAtK(node * root, node * target, int k){   // this function will return  the distance
    if(root==NULL){
        return -1;
    }
    if(root==target){
        PrintSubTreeNode(root,k);
        return 0;// it means we are at main root and hence the distance is 0
    }
    int dl=PrintNodesAtK(root->left,target,k);
    if(dl!=-1){
        if(dl+1==k){
            cout<<root->data<<" ";
        }
        else{
            PrintSubTreeNode(root->right,k-dl-2);
        }
        return 1+dl;
    }
    int dr=PrintNodesAtK(root->right,target,k);
    if(dr!=-1){
        if(dr+1==k){
            cout<<root->data<<" ";
        }
        else{
            PrintSubTreeNode(root->right,k-dr-2);
        }
        return 1+dr;
    }
    return -1;
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
PrintNodesAtK(root,root->left->left,1);
return 0;
}