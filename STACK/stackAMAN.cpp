#include<iostream>
#include<algorithm>
#include<string>
#include<cmath>
#include<limits>
#define n 5 // #define is a useful C++ component that allows the programmer to give a 
            // name to a constant value before the program is compiled. ... 
            // In that case the text would be replaced by the #defined number (or text). 
            //In general, the const keyword is preferred for defining constants and 
            // should be used instead of #define .
using namespace std;
class stack{
    public:
        int * arr;
        int top=-1;

        stack(){
            arr=new int [n];
        }

        void Push(int x){
            if(top==n-1){
                cout<<"Stack OverFolw !"<<endl;
                return;
            }
            top++;
            arr[top]=x;
        }

        void Pop(){
            if(top==-1){
                cout<<"Stack UnderFlow"<<endl;
                return ;
            }
            top--;
        }

        int Top(){
            if(top==-1){
                cout<<"Stack is empty !"<<endl;
            return -1;
            }
            return arr[top];
        }

        bool isEmpty(){
            return top==-1; // retrun true id top==-1
        }

        int countElements(){
            return top+1;   // if top==-1, then count=0;
        }

        int peek(int pos) {    //it is used to peek element on the position.
        if(top==-1){
            cout<<"Stack UnderFlow, No such Element";
            return -1;
        }
        return arr[pos];
        }

        void Change(int pos, int val){
            if(top==-1){
                cout<<"Stack UnderFlow, No element found !"<<endl;
            }
            arr[pos]=val;
            cout << "The value changed at postion " << pos << " with the value " << val << endl;
        }

        void Display(){
            for(int i=0;i<5;i++){
                cout<<arr[i]<<" ";
            }
        }
};
int main(){
stack st;
// st.Push(1);
st.Push(1);
st.Push(2);
st.Push(3);
st.Push(4);
st.Push(5);
st.Pop();
st.Pop();
cout<<st.peek(1)<<endl;;
st.Push(4);
cout<<st.Top()<<endl;
st.Change(3,10);
cout<<st.Top()<<endl;
cout<<st.countElements()<<endl;
return 0;
}