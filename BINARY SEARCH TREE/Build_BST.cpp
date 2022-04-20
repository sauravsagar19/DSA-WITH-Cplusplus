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
void inorder(node * root){
    if(root==NULL){
        return;
    }
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}
int main(){
node * root=NULL;
root=insertBST(root,5);
// insertBST(root,10);
// insertBST(root,1);
// insertBST(root,20);
// insertBST(root,13);
// insertBST(root,7);
// insertBST(root,9);
// insertBST(root,36);
// insertBST(root,17);
for (int i=1;i<20;i+=2){
    insertBST(root,i);
}
inorder(root);
cout<<endl;
return 0;
}