#include<iostream>
#include<algorithm>
#include<string>
#include<cmath>
#include<limits>
using namespace std;
struct node{
    int data;
    node * left;
    node *  right;
    node(int val){
        data=val;
        left=NULL;
        right=NULL;
    }
};
node * insertion(node * root, int val){
    if(root==NULL){
        return new node ( val);
    }
    if(val<root->data){
        root->left=insertion(root->left,val);
    }else{
        root->right=insertion(root->right, val);
    }
    return root;
}
node * search_BST(node * root, int key){
    if(root==NULL){
        return NULL; 
    }
    if(root->data==key){
        return root;
    }
    // val<root->data..... thatswhy we have to search in the left part
    if(key<root->data){
        return search_BST(root->left,key);
    }
        return search_BST(root->right,key);
}
node * inorderSucc(node * root){
    node * curr=root;
    while(curr && curr->left!=NULL){
          curr=curr->left;
    }
    return curr;
}
node * DeleteInBST(node * root, int key){
    if(key<root->data){
        root->left=DeleteInBST(root->left,key);
    }
    else if(key>root->data){
        root->right=DeleteInBST(root->right,key);
    }
    else{
        if(root->left==NULL){
            node * temp=root->right;
            free(root);
            return temp;
        }
        else if(key<root->data){
            node * temp=root->left;
            free(root);
            return temp;
        }
        node * temp=inorderSucc(root->right);
        root->data=temp->data;
        root->right=DeleteInBST(root->right,temp->data);
        return root;
    }
    // node * temp=inorderSucc(root->right);
    // root->data=temp->data;
    // root->right=DeleteInBST(root->right,temp->data);
    // return root;
}
void Inorder(node * root){
    if(root==NULL){
        return;
    }
    Inorder(root->left);
    cout<<root->data<<" ";
    Inorder(root->right);

}
int main(){
node * root=NULL;
root=insertion(root,5);
insertion(root,1);
insertion(root,3);
insertion(root,4);
insertion(root,2);
insertion(root,7);
// node * data=search_BST(root,50);
// if(data!=NULL){
//     cout<<"Value found "<<endl;
// }else{
//     cout<<"Not found !"<<endl;
// }
// node * in=inorderSucc(root);
// if(in==NULL){
//     cout<<"No inorder Succesor found "<<endl;
// }
// else{
//     cout<<"Inorder successor: "<<in<<endl;
// }
Inorder(root);
DeleteInBST(root,5);
cout<<endl;
Inorder(root);
return 0;
}