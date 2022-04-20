#include<bits/stdc++.h>
using namespace std;
struct node{
    int data;
    node * left;
    node * right;
    node(int val){
        data=val;
        left=NULL;
        right=NULL;
    }
};
node * insertBST(node * root, int val){
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

node * inorderSucc(node * root, node * target){
    if(target->right!=NULL){
        node * temp=target->right;
        while(temp->left!=NULL){
            temp=temp->left;
        }
        return temp;
    }
    node * temp=root;
    node * succ=NULL;
    // node * prec=NULL;                              //predecessor
    while(temp!=NULL){
        if(temp->data>target->data){
            succ=temp;
            temp=temp->left;
        }
        else if(temp->data<target->data){
            // prec=temp;
            temp=temp->right;
        }
        else{
            break;
        }

    }
    
    return succ;
}
int main(){
node * root=NULL;
root=insertBST(root,5);
for (int i=0;i<=24;i+=2){
    insertBST(root,i);
}
inorder(root);
cout<<endl;
cout<<inorderSucc(root,root)->data;
return 0;
}