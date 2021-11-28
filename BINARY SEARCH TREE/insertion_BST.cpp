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
node * InsertBST(node * root, int val){
    if(root==NULL){
        return new node (val);  // if we couldn't find the node .. we Insert it
    }
    if(val<root->data){
        root->left=InsertBST(root->left,val); // condtion 1
    }
    else{
        root->right=InsertBST(root->right,val); // condition 2
    }
    return root;
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
root=InsertBST(root,5);
InsertBST(root,1);
InsertBST(root,3);
InsertBST(root,4);
InsertBST(root,2);
InsertBST(root,7);
Inorder(root); // output=1 2 3 4 5 6 7
                // Beacause Inorder traverse in BST give the sequence in sorted order
cout<<endl;
return 0;
}