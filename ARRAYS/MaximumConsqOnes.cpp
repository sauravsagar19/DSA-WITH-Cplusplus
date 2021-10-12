// return the length of the longest subarray that contains only ones
#include<iostream>
#include<algorithm>
#include<string>
#include<cmath>
#include<limits>
#include<vector>
using namespace std;
int maxConsequtive_1(vector<int> v, int k){
    int n=v.size();
    int currZero=0, i=0,ans=0;
    for(int j=0;j<n;j++){
        if(v[j]==0){
            currZero++;
        }
        while(currZero > k){
            if(v[i]==0){
                currZero--; 
            }
            i++; // window Shrink 
        }

    ans=max(ans,j-i+1);  // j-i+1;  // number of element in the array
    }
    return ans;
}
int main(){
vector<int>v1={1,1,1,0,0,0,1,1,1,1,0};
cout<<maxConsequtive_1(v1,2);
return 0;
}