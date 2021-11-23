#include<iostream>
#include<algorithm>
#include<string>
#include<cmath>
#include<limits>
using namespace std;
struct node{
    int data;
    struct node *left;
    struct node *right;
    node(int val){
        data=val;
        left=NULL;
        right=NULL;
    }
};
int HeightOfBT(node * root){
    if(root==NULL){
        return 0;
    }
    int lh=HeightOfBT(root->left);
    int rh=HeightOfBT(root->right);
    return max(lh,rh)+1;
}
int DiameterOfBT(node * root){
    if(root==NULL){
        return 0;
    }
    int lh=HeightOfBT(root->left);
    int rh=HeightOfBT(root->right);
    int currDiameter=lh+rh+1;

    int leftD=DiameterOfBT(root->left);
    int rightD=DiameterOfBT(root->right); 
    return max(currDiameter,max(leftD,rightD));
}
//Best soln;
int optimised_Dia_btree(node * root,int  *height){
    if(root==NULL){
        *height=0;
        return 0;
    }
    int lh=0,rh=0;
    int LeftD=optimised_Dia_btree(root->left,&lh);
    int rightD=optimised_Dia_btree(root->right,&rh);
    int currD=lh+rh+1;
    *height=max(lh,rh)+1;
    return max(currD,max(LeftD,rightD));
}

int main(){
struct node * root= new node (1);
root->left=new node (2);
root->right=new node(3);
root->left->left=new node(4);
root->left->right=new node(5);
root->right->left=new node(6);
root->right->right=new node(7);
/* 
        1
    2       3
  4    5  6     7
*/
cout<<HeightOfBT(root)<<endl; // output: 3
int height=0;
cout<<optimised_Dia_btree(root,&height)<<endl;  // output: 5 nodes between 4 and 7
return 0;
}