// Using Stack

#include<iostream>
#include<algorithm>
#include<string>
#include<cmath>
#include<stack>
#include<vector>
#include<limits>
using namespace std;
int rain_water(vector<int>a){
    stack<int>st;
    int area;
    int n=a.size();
    for(int i=0;i<n;i++){
        while(!st.empty() && a[st.top()]<a[i]){
            int curr=st.top();
            st.pop();
            if(st.empty()){
                break;
            }
            int len=i-st.top()-1;
            area+=(min(a[st.top()],a[i])-a[curr])  * len;
                        // height                    length(diff)
        }
        st.push(i);
    }
    return area;
}
int main(){
vector<int>a={0,1,0,2,1,0,1,3,2,1,2,1};
cout<<rain_water(a);
return 0;
}