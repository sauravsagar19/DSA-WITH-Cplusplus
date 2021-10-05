#include<iostream>
#include<algorithm>
#include<string>
#include<cmath>
#include<limits>

#define n 20 
using namespace std;
class queue{
    int *arr;
    int front;
    int back;

    public:
    queue(){
        arr=new int[n];
        front =-1;
        back =-1;
    }

    void push(int x){
        if(back==n-1){
            cout<<"Queue Overloaded !";
            return ;
        }
        back++;
        arr[back]=x;
        
        if(front=-1){
            front++;
        }
    }
    int  peek(){
       if(front==-1 || front>back){
           cout<<"Nothing to peek !"<<endl;
           return -1;
       } 
       return arr[front];

    }

    bool isEmpty(){
       if(front==-1 || front>back){
           
           return true;
       }
       else{
           return false;
       } 
    }

    void pop(){
        if(front==-1 || front>back){
           cout<<"Nothing to pop !"<<endl;
           return;
       }
       front ++;
    }

    void change (int ele, int pos){
       if(front==-1 || front>back){
           cout<<"No Element Found !"<<endl;
           return;
       } 
       arr[pos]=ele;
    }
    

};
int main(){
queue q;
q.push(2);
q.push(3);
q.push(4);
q.push(5);
q.push(6);

q.pop();
// cout<<q.peek()<<endl;

cout<<q.peek()<<endl;
// cout<<q.isEmpty();
q.change(20,1);
cout<<q.peek()<<endl;



return 0;
}