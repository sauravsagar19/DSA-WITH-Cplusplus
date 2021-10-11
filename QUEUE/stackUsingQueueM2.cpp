#include<iostream>
#include<algorithm>
#include<string>
#include<cmath>
#include<queue>
using namespace std;
class stack{
    queue<int>q1;
    queue<int>q2;
    int N;

    public:
        stack(){
            N=0;   // By default 
        }

        void pop(){
            if(q1.empty()){
                cout<<"Already empty ! Nothing to pop "<<endl;
                return ;
            }
            while(q1.size()!=1){
                q2.push(q1.front());
                q1.pop();
            }
            q1.pop();
            N--;

            queue<int>temp=q1;
            q1=q2;
            q2=temp;
        }
        void push_back(int x){
            q1.push(x);
            N++;
        }

        int Top(){
            if(q1.empty()){
                cout<<"Empty !"<<endl;
                return -1;
            }
            while(q1.size()!=1){
                q2.push(q1.front());
                q1.pop();
            }
            int ans=q1.front();
            q2.push(ans);
            q1.pop();

            queue<int> temp=q1;
            q1=q2;
            q2=temp;

            return ans;
        }
        int size(){
            return N; 
        }
};
int main(){
stack st; 
st.push_back(10); 
st.push_back(20);
st.push_back(30);
st.push_back(40);

cout<<st.Top()<<endl;   // output : 40 ; because we pushed 40 un the last and we know
                    // stack folows LIFO
cout<<st.size()<<endl;
st.pop();
cout<<st.Top()<<endl;
return 0;
}