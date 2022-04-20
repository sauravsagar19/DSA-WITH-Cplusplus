#include<bits/stdc++.h>
using namespace std;
struct node
{
    int data;
    node * left;
    node * right;
    node ( int val){
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
// inorder 
void inorder(node * root){
    if(root==NULL){
        return;
    }
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}
// Search
node * searchBST(node * root,int key){
    if(root==NULL){
        return NULL;
    }
    if(root->data==key){
        return root;
    }
    if(key<root->data){
        root->left=searchBST(root->left,key);
        return root->left;
    }
    else{
        root->right=searchBST(root->right,key);
        return root->right;
    }

}

// inorder successor
node * inorderSucc(node * root){
    node * curr=root;
    if(curr == NULL)
   {
       return NULL;
   }
    while(curr && curr->left!=NULL){
          curr=curr->left;
    }
    return curr;
}

// Delete
node * deleteBST(node * root,int key){
    // Before deleting anything, we need to search it first
    if(key<root->data){
        root->left=deleteBST(root->left,key);
    }
    else if(key>root->data){
        root->right=deleteBST(root->right,key);
    }
    else{             // key==root->data
        if(root->left==NULL && root->right==NULL){    // Case 1: to be deleted node is leaf
            free(root);
            return NULL;
        }
        else if(root->left==NULL && root->right!=NULL){    // Case 2: to be deleted node has one child
            node * temp=root->right;
            free(root);
            return temp;
        }
        else if(root->left!=NULL && root->right==NULL){    // case 2: to be deleted node has one child
            node * temp=root->left;
            free(root);
            return temp;
        }
         // case 3: if node has 2 child, we need to consider inorder successer
        // node * temp=inorderSucc(root->right);
        // root->data=temp->data;
        // root->right=deleteBST(root->right,temp->data);
        
        int min = inorderSucc(root->right)->data;
           root->data = min;
           root->right = deleteBST(root->right,min);
           return root;
        
    }
    return root;
    
}
int main(){
node * root=NULL;
root=insertBST(root,5);
insertBST(root,10);
insertBST(root,1);
insertBST(root,20);
insertBST(root,13);
insertBST(root,7);
insertBST(root,9);
insertBST(root,36);
insertBST(root,17);
// searching 

// node* found=searchBST(root,97);
// if(found!=NULL){
//     cout<<"Found"<<endl;
// }else{
//     cout<<"Not Found"<<endl;
// }
// inorder(root);

// Deletion

deleteBST(root,17);
inorder(root);
return 0;
}