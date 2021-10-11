#include<iostream>
#include<algorithm>
#include<string>
#include<cmath>
#include<limits>
#include<vector>
#include<stack>
using namespace std;
int get_max_area(vector<int>a){
    int ans=0,i=0,n=a.size();
    a.push_back(0); // to make the remaining bar 0
    stack <int>st;
    while(i<n){
        while(!st.empty() && a[st.top()]>a[i]){
            int t=st.top();
            int h=a[t];
            st.pop();
            if(st.empty()){
                ans=max(ans,h*i);
            }
            else{
                int l=i-st.top()-1;
                ans=max(ans,h * l);
            }
        }
        st.push(i);
        i++;
    }
    return ans;
}
int main(){
vector<int>a={2,1,5,6,2,3};
cout<<get_max_area(a);
return 0;
}