#include<iostream>
#include<algorithm>
#include<string>
#include<cmath>
#include<limits>
#include<queue>
using namespace std;
struct node {
    int data;
    node * left;
    node * right;
    node(int val){
        data =val;
        left=NULL;
        right=NULL;
    }
};
void PrintNode_LevelWise(node * root){
    if(root==NULL){
        return;
    }
    queue<node * >q;
    q.push(root);
    q.push(NULL);
    while(!q.empty()){
        node * qNode=q.front();
        q.pop();
        if(qNode!=NULL){
            cout<<qNode->data<<"  ";
            if(qNode->left){
                q.push(qNode->left);
            }
            if(qNode->right){
                q.push(qNode->right);
            }
        }
        else if(!q.empty()){
            q.push(NULL);
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
PrintNode_LevelWise(root); 
return 0;
}