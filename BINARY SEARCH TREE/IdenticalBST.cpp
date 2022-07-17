#include<bits/stdc++.h>
using namespace std;
struct node
{
    int data;
    node * left;
    node * right;
    node(int val){
        data=val;
        left=NULL;
        right=NULL;
    }
};
bool IsIdentical(node * root1,node * root2){
    if(root1==NULL && root2==NULL){
        return true;
    }
    else if(root1==NULL || root2==NULL){
        return false;
    }
    else{
        bool cond=root1->data==root2->data;
        bool leftSub=IsIdentical(root1->left,root2->left);
        bool rightsub=IsIdentical(root1->right,root2->right);
        if(cond && leftSub && rightsub){
            return true;
        }
        return false;
    }
}
int main(){
node * root1=new node(10);
root1->left=new node(8);
root1->right=new node(11);

node * root2=new node(12);
root2->left=new node(8);
root2->right=new node(16);
if(IsIdentical(root1,root2)){
    cout<<"Identical"<<endl;
}
else{
    cout<<"Not Identical"<<endl;
}
return 0;
}