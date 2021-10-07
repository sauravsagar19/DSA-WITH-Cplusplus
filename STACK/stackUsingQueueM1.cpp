// // Method 1
// we take two Queues into consideration
// then we first add in q2
// then we add element of q1 to q2
// then we swap them 
#include<iostream>
#include<algorithm>
#include<queue>
using namespace std;
class stack{
    public:
    queue<int>q1;
    queue<int>q2;
    int N;
    stack(){
        N=0;               // Default constructor for stack
    }
    void push_back(int x){
        q2.push(x);
        N++;
        while(!q1.empty()){
            q2.push(q1.front());
            q1.pop();
        }
        // swap q1 and q2
        queue<int>temp=q1;
        q1=q2;
        q2=temp;
    }

    void pop(){         // Simply we POP from q1
        q1.pop();
        N--;
        if(q1.empty()){
            cout<<"No item left "<<endl;
        }
    }

    int Top(){
        return q1.front();
    }

    int Size(){
        return N;
    }
    
};
int main(){
stack st;
st.push_back(5);
st.push_back(10);
st.push_back(20);
st.push_back(30);
st.pop();
cout<<st.Top();
st.pop();
st.pop();
st.pop();


return 0;
}