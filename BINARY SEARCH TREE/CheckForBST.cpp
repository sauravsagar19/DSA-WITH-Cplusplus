#include<bits/stdc++.h>
using namespace std;
struct node {
    int data;
    node * left;
    node * right;
    node(int val){
        data=val;
        left=NULL;
        right=NULL;
    }
};
node * insertBST(node* root,int val){
    if(root==NULL){
        return new node(val);
    }
    if(val<root->data){
        root->left=insertBST(root->left,val);
    }else{
        root->right=insertBST(root->right,val);
    }
    return root;
}
bool checkBST(node * root,node * min=NULL, node * max=NULL){
    if(root==NULL){
        return true;
    }
    if(min!=NULL && root->data<=min->data){
        return false;
    }
    if(max!=NULL && root->data>=max->data){
        return false;
    }
    bool leftValid=checkBST(root->left,min,root);
    bool rightValid=checkBST(root->right,root,max);
    return leftValid && rightValid;
}
int main(){
node * root=NULL;
root=insertBST(root,5);
insertBST(root,10);
insertBST(root,1);
insertBST(root,20);
if(checkBST(root,NULL,NULL)){
    cout<<"Yes! Its a BST";
}
else{
    cout<<"Nope! it isn't";
}
}