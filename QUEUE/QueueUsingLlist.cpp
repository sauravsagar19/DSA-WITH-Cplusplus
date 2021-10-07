// implementation of queue using linked list

#include<iostream>
#include<algorithm>
#include<string>
#include<cmath>
#include<limits>
using namespace std;
class node{
    public:

    node * next;
    int data;

    node(int val){
        data=val;
        next=NULL;
    }
};

class queue{
    node * front;
    node * back;

    public:
        queue(){
           front=NULL;
           back=NULL; 
        }

    // push(insert at tail)
        void push(int x){
            node * n=new node(x);
            if(front==NULL){ // if our queue is empty
                front=n; 
                back=n;
                return;
            }
            back->next=n;
            back=n;
        }

        void pop(){
             if(front==NULL){ 
                cout<<"Queue is already empty"<<endl;
                return;
            }

            node * todelete=front;
            front=front->next;
            delete todelete;
        }

        int peek(){
           if(front==NULL){ 
                cout<<"No element in Queue "<<endl;
                return -1;
            } 

            return front->data;

        }

        bool isEmpty(){
          if(front==NULL){ 
             
                return true;
            }   
            else{
                return false;
            }
        }
};
int main(){
queue q;
q.push(10);
q.push(20);
q.push(30);
q.push(40);
q.push(50);

// cout<<q.peek()<<endl;
q.pop();
cout<<q.peek()<<endl;
cout<<q.isEmpty()<<endl;
return 0;
}