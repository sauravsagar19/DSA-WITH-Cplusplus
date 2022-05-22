#include<iostream>
#include<math.h>
#define MAX 1000
bool HashMap[MAX+1][2];
using namespace std;

void InsertHash(int arr[], int n){
    for(int i=0;i<n;i++){
        if(arr[i]>=0){
            HashMap[arr[i]][0]=1; // if positive, put 1 at first col
        }
        else{
            HashMap[abs(arr[i])][1]=1; // if negative, put 1 at second col
        }
    }
}
bool search(int x){
       if(x>0){
           if(HashMap[x][0]==1){
               return true;
           }else{
               return false;
           }
       }else{
           x=abs(x);
           if(HashMap[x][1]==1){
               return true;
           }else{
               return false;
           }
       }
}
int main(){
    int arr[5]={-1,3,6,-8,9};
    InsertHash(arr,5);
    int find=9;
    if(search(find)){
        cout<<"Found it !"<<endl;
    }else{
        cout<<"Could not find it"<<endl;
    }
return 0;
}