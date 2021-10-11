//Prateek Narang
#include<iostream>
#include<algorithm>
#include<string>
#include<cmath>
#include<limits>
#include<stack>
#include<vector>
#include<deque>
using namespace std;
void Max_sub_array(vector<int>a,int k){
deque<int>Q(k);
int n=a.size();
vector<int>ans;
// 1. Process only the first k element
    for(int i=0;i<k;i++){
        while(!Q.empty() and a[i]>a[Q.back()]){
            Q.pop_back();
        }
        Q.push_back(i);
    }
    ans.push_back(a[Q.front()]);

// 2. for remaining element
    for(int i=k;i<n;i++){
        while(!Q.empty() and Q.front()<=i-k){
            Q.pop_front();
        }
        while(!Q.empty() and a[i]>a[Q.back()]){
            Q.pop_back();
        }
        Q.push_back(i);
        ans.push_back(a[Q.front()]);
    }
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }

}
int main(){
vector<int>a={1,2,3,4,6,1,2,3};
Max_sub_array(a,3);
return 0;
}

