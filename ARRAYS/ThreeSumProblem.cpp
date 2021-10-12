#include<iostream>
#include<algorithm>
#include<string>
#include<cmath>
#include<limits>
#include<vector>
using namespace std;
bool Check_ThreeSum(vector<int>v,int target){
    sort(v.begin(),v.end());
    int n=v.size();
    for(int i=0;i<n;i++){
        int low=i+1;
        int high=n-1;
        while(low<high){
            int current=v[low] + v[high]+v[i];
            if(current==target){
                return true;
            }
            else if(current<target){
                low++;
            }
            else{
                high--;
            }
        }
    }
    return false;
}
int main(){
vector<int>v={12,3,7,1,6,9};
cout<<Check_ThreeSum(v,240);
return 0;
}