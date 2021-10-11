#include<iostream>
#include<algorithm>
#include<string>
#include<cmath>
#include<limits>
#include<vector>
#include<stack>
using namespace std;
int rain_water(vector<int>a){
    stack<int>st;
    int n=a.size();
    int ans;
    for(int i=0;i<n;i++){
        while(!st.empty() && a[st.top()]<a[i]){
            int curr=st.top();
            st.pop();
            if(st.empty()){
                break;
            }
            int len= i-st.top()-1;
            ans+= (min(a[st.top()],a[i])-a[curr])*len;

        }
        st.push(i);
    }
    return ans;
}
int main(){
vector<int>a={0,1,0,2,1,0,1,3,2,1,2,1};
cout<<rain_water(a);
return 0;
}