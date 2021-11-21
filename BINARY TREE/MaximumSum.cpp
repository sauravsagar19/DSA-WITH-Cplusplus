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
int maxPathSumUtil(node * root, int & ans){
    if(root==NULL){
        return 0;
    }
    int left=maxPathSumUtil(root->left,ans);
    int right=maxPathSumUtil(root->right,ans);
    int nodeMax=max(max(root->data,root->data+left+right),max(root->data+left,root->data+right));
    ans=max(ans,nodeMax);
    int singlePathSum=max(root->data,max(root->data+left,root->data+right));
    return singlePathSum;
}
int maxPathSum(node *root){
    int ans=INT_MIN;
    maxPathSumUtil(root,ans);
    return ans;

}
int main(){
struct node * root= new node (1);
root->left=new node (-12);
root->right=new node(3);
/* 
        1
    2       3
*/
root->left->left=new node(4);
// root->left->right=new node(5);
root->right->left=new node(5);
root->right->right=new node(-6);
cout<<maxPathSum(root);
return 0;
}