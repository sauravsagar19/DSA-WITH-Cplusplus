// Build Tree from preOrder and Inorder
#include<iostream>
#include<algorithm>
#include<string>
#include<cmath>
#include<limits>
using namespace std;
struct node{
    int data;
    struct node* left;
    struct node* right;
    node(int val){
        data=val;
        left=NULL;
        right = NULL;
    }
};
int Search(int inOrder[], int start,int end, int curr){
        for(int i=start;i<=end;i++){
            if(inOrder[i]==curr){
                return i;
            }
            
        }
        return -1;
}
node * BuildTree(int preOrder[], int inOrder[], int start, int end){
    static int idx=0;
    if(start>end){
        return NULL;
    }
    int curr=preOrder[idx];
    idx++;
    node * currNode = new node(curr);
    if(start==end){
        return currNode;    //  when only one Node is there
    }
    int pos=Search(inOrder,start, end, curr);
    currNode->left=BuildTree(preOrder, inOrder,start,pos-1);
    currNode->right=BuildTree(preOrder,inOrder,pos+1,end);
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
int preOrder[]={1,2,4,3,5};
int inOrder[]={4,2,1,5,3};
 node * root=BuildTree(preOrder,inOrder,0,4);
inorderPrint(root);
cout<<endl;

return 0;
}
