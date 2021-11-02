// we have to find the sum of node of  kth level 
#include<iostream>
#include<algorithm>
#include<string>
#include<cmath>
#include<limits>
#include<queue>
using namespace std;
struct node {
    int data;
    struct node * left;
    struct node * right;
    node (int val){
        data = val;
        left = NULL;
        right= NULL;
    }
};
int KlevelSum(node * root, int k){
    if(root==NULL){
        return -1;
    }
queue<node*>q;
int level;
int sum=0;
q.push(root);
q.push(NULL);
level=0;

while(!q.empty()){
    node * qNode=q.front();
    q.pop();
    if(qNode!=NULL){
        if(level==k){
            sum+=qNode->data;
        }
        if(qNode->left)
            q.push(qNode->left);

        if(qNode->right)
            q.push(qNode->right);
    }
    else if(!q.empty()){
        q.push(NULL);
        level++;
    }

}
return sum;
}
int main(){
struct node * root= new node (1);
root->left=new node (2);
root->right=new node(3);
root->left->left=new node(4);
root->left->right=new node(5);
root->right->left=new node(6);
root->right->right=new node(7);
cout<<KlevelSum(root,2);
return 0;
}