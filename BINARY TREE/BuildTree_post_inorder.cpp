// Bulid tree from postOrder and Inorder
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
int Search(int inorder[], int start, int end,int curr){
    for(int i=start;i<=end;i++){
        if(inorder[i]==curr){
            return i;
        }
    }
    return -1;
}
node * BuildTree(int postorder[], int inorder[],int n,int start, int end){
    static int idx=n-1;
    if(start>end){
        return NULL;
    }
    int curr=postorder[idx];
    idx--;
    node * currNode=new node(curr);
    if(start==end){
        return currNode;
    }
    int pos=Search(inorder,start, end,curr);
    currNode->right=BuildTree(postorder,inorder,n,pos+1,end);
    currNode->left=BuildTree(postorder,inorder,n,start,pos-1);
    return currNode;

}
void inorderPrint(node * root){
    if(root==NULL){
        return;
    }
    inorderPrint(root->left);
    cout<<root->data<<" ";
    inorderPrint(root->right);
}
int main(){
int postorder[]={4,2,5,3,1};
int inorder[]={4,2,1,5,3};
node * root=BuildTree(postorder,inorder,5,0,4);
inorderPrint(root);
cout<<endl;
return 0;
}