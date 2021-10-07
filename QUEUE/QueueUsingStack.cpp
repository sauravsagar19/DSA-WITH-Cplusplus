#include<iostream>
#include<algorithm>
#include<string>
#include<cmath>
#include<limits>
#include<stack>
using namespace std;
// Approach 1
// class Queue{
//     public:
//     stack<int>st1; 
//     stack<int>st2;

//     void push(int x){
//         st1.push(x);
//     }

//     int pop(){
//         if(st1.empty() && st2.empty()){
//             cout<<"Error: ";
//             return -1;
//         }
//         if(st2.empty()){
//                 while(!st1.empty()){
//                 st2.push(st1.top());
//                 st1.pop();
//             }
//         }
//             int topVal=st2.top();
//             st2.pop();
//             return topVal;
//     }
//     bool Isempty(){
//         if(st1.empty() && st2.empty()){
//             return true;
//         }
//         else{
//             return false;
//         }
//     }
// };

// Approach 2 :
// using function call stack(we'll  be using recursion in the pop() )
class Queue{
    public:
    stack<int>st1; 
    

    void push(int x){
        st1.push(x);
    }

    int pop(){
        if(st1.empty()){
            cout<<"Error: ";
            return -1;
        }
        int x=st1.top();
        st1.pop();
        if(st1.empty()){
            return x;
        }
        int item = pop();
        st1.push(x);
        return item;
       
    }
    bool Isempty(){
        if(st1.empty()){
            return true;
        }
        else{
            return false;
        }
    }
};

int main(){
Queue q;
q.push(10);
q.push(20);
q.push(30);
q.push(40);
q.push(50);
q.push(60);
q.push(70);
cout<<q.pop()<<endl;   // first in first out(FIFO) queue property
cout<<q.pop()<<endl;
q.pop();
q.pop();
q.pop();
q.pop();
q.pop();
q.pop(); //  our Queue is empty so its giving error
return 0;
}