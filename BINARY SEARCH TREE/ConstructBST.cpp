// Construct BST from Preorder
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

node* printPreorder(node* root){
    if(root==NULL){
        return NULL;
    }
    cout<<root->data<<" --> ";
    printPreorder(root->left);
    printPreorder(root->right);
    return root;
}

node * BSTfromPreoder(int preorder[],int *preorderidx,int key,int min,int max,int n){
    
    if(*preorderidx>=n){
        return NULL;
    }
    node* root=NULL;
    if(key>min && key<max){
        root=new node (key);
        *preorderidx=*preorderidx+1;
        if(*preorderidx<n){
            root->left=BSTfromPreoder(preorder,preorderidx,preorder[*preorderidx],min,key,n);
        }
        if(*preorderidx<n){
            root->right=BSTfromPreoder(preorder,preorderidx,preorder[*preorderidx],key,max,n);
        }
    }
    return root;
}
int main(){
int preorder[] ={10,2,1,13,11};
int n=5;
int preorderidx=0;
node * root=BSTfromPreoder(preorder,&preorderidx,preorder[0],INT_MIN,INT_MAX,n);
printPreorder(root);
return 0;
}