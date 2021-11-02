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
int calculateHeight(node * root){
    if(root==NULL){
        return 0;
    }
    int lHeight=calculateHeight(root->left);
    int RHeight=calculateHeight(root->right);
    return max(lHeight,RHeight)+1;
}
int DiameterBTree(node * root){
    if(root==NULL){
        return 0;
    }
    int Lheight=calculateHeight(root->left);
    int Rheight=calculateHeight(root->right);
    int currDiameter=Lheight+Rheight+1;

    int leftDiamter=DiameterBTree(root->left);
    int rightDiameter=DiameterBTree(root->right);

    return max(currDiameter,max(leftDiamter,rightDiameter));
    // Tc: O(n^n)
}

// More Optimised code
int Optimised_Dia_bTree(node * root, int * Height){
    if(root==NULL){

        *Height=0;
        return 0;
    }
    int lh=0,rh=0;
    int lDiameter=Optimised_Dia_bTree(root->left,&lh);
    int rDiameter=Optimised_Dia_bTree(root->right,&rh);

    int currDiameter=lh+rh+1;

    *Height=max(lh,rh)+1;
    return max(currDiameter,max(lDiameter,rDiameter));
}
int main(){

struct node * root= new node (1);
root->left=new node (2);
root->right=new node(3);
root->left->left=new node(4);
root->left->right=new node(5);
root->right->left=new node(6);
root->right->right=new node(7);
int height=0;
cout<<Optimised_Dia_bTree(root, &height);
return 0;
}