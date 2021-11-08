#include<iostream>
#include<algorithm>
#include<string>
#include<cmath>
#include<limits>
#include<queue>
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
void LeftView(node * root){
    if(root==NULL){
        return;
    }
    queue<node * >q;
    q.push(root);
    while(!q.empty()){
        int  n=q.size();
        for(int i=1;i<=n;i++){
            node * curr=q.front();
            q.pop();
            if(i==1){
                cout<<curr->data<<" ";
            }
            if(curr->left!=NULL){
                q.push(curr->left);
            }
            if(curr->right!=NULL){
                q.push(curr->right);
            }
        }
    }
}
int main(){
struct node * root= new node (1);
root->left=new node (2);
root->right=new node(3);
/* 
        1
    2       3
*/
root->left->left=new node(4);
root->left->right=new node(5);
root->right->left=new node(6);
root->right->right=new node(7);
LeftView(root);
return 0;
}