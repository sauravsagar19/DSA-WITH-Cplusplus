#include<iostream>
#include<algorithm>
#include<string>
#include<cmath>
#include<limits>
using namespace std;
int main(){
int n,m,k;
cin>>n>>m>>k;
int mat[n][m];
for(int i=0;i<n;i++){
    for (int j=0;j<m;j++){
        cin>>mat[i][j];
    }
}
int r=0,c=m-1;
bool found=false;
while(r<n && c>=0){
    if(mat[r][c]==k){
        found=true;
    }
    if(mat[r][c]>k){
        c--;
    }
    else{
        r++;
    }
}
if(found){
    cout<<"Element Found "<<endl;
}
else{
    cout<<"Not Found "<<endl;
}

return 0;
}