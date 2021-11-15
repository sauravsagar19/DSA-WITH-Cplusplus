// Shortest Distance between two nodes
// Strategy:  
    // 1> Find the LCA
    // 2> Find the Distance of n1(i.e d1) and n2(i.e d2) from LCA
    // 3> Return (d1+d2)
#include<iostream>
#include<algorithm>
#include<string>
#include<cmath>
#include<limits>
using namespace std;
struct node {
    int data;
    struct node * left;
    struct node * right;
    node(int val){
        data=val;
        left=NULL;
        right=NULL;
    }
};
node * LCA(node * root,int n1,int n2){
    // if(root==NULL){
    //     return NULL;
    // }
    // if(root->data==n1 || root->data==n2){
    //     return root;
    // }
    // node * leftLCA=LCA(root->left,n1,n2);
    // node * rightLCA=LCA(root->right,n1,n2);
    // // if(leftLCA!=NULL && right!=NULL){
    // //     return root;
    // // }
    // if(leftLCA && rightLCA){
    //     return root;
    // }
    // if(leftLCA==NULL && rightLCA==NULL){
    //     return NULL;
    // }
    

    // if(leftLCA!=NULL){
    //     return leftLCA;

    // }
    // return rightLCA;
    if(root==NULL){
        return NULL;
    }
    if(root->data==n1 || root->data==n2){
        return root;
    }
    node * leftLCA= LCA(root->left,n2,n1);
    node * rightLCA=LCA(root->right,n2,n1);
    if(leftLCA!=NULL && rightLCA!=NULL){
        return root;
    }
    if(leftLCA!=NULL){
        return leftLCA;
    }
    if(rightLCA!=NULL){
        return rightLCA;
    }
}

int findDistance(node * root, int key, int distance){
    if(root==NULL){
        return -1;
    }
    if(root->data==key){
        return distance;
    }
    int leftDis=findDistance(root->left,key,distance+1);
    int rightDis=findDistance(root->right,key,distance+1);
    if(leftDis!=-1){
        return leftDis;
    }
    // return findDistance(root->right,key,distance+1);
    // if(rightDis!=-1){
        return rightDis;
    // }


}
int DistBtwNodes(node * root, int n1,int n2){
    node * lca=LCA(root,n1,n2);
    int d1=findDistance(lca,n1,0);
    int d2=findDistance(lca,n2,0);
    return d1+d2;
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
root->right->right=new node(5);
// root->right->left=new node(6);
// root->right->right=new node(7);
cout<<DistBtwNodes(root,2,5);
return 0;
}