#include<iostream>
#include<algorithm>
#include<string>
#include<cmath>
#include<stack>
#include<vector>
#include<limits>
using namespace std;
vector<int> stockspain(vector<int> prices){
    vector<int>ans;
    stack<pair<int,int>>st; // we made a pair for {price,days}
    for(auto price:prices){     // we iterate over prices
        int days=1; //  Default for the first element
        while(!st.empty() and st.top().first<=price){
            days+=st.top().second;
            st.pop();
        }
        st.push({price,days});
        ans.push_back(days);
    }
    return ans;
}
int main(){
vector<int>v={100,80,60,70,60,75,85};
vector<int>res=stockspain(v);
for(auto r:res){
    cout<<r<<" ";
}
cout<<endl;
return 0;
}