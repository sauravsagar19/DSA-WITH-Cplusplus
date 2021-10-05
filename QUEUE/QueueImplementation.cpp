#include <iostream>
using namespace std;
class Queue
{
public:
    int Front;
    int Rear;
    int arr[5];
    Queue()
    {
        Front = -1;
        Rear = -1;
        for (int i = 0; i < 5; i++)
        {
            arr[i] = 0;
        }
    }
    bool isEmpty()
    {
        if (Front == -1 && Rear == -1)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    bool isFull()
    {
        if (Rear == 4)
        {
            return true;
        }
        else     
        {
            return false;
        }
    }
    void Enqueue(int val)
    {
        if (isFull())
        {
            cout << "Queue is full. " << endl;
        }
        else if (isEmpty())
        {
            Rear = Front = 0;
            arr[Rear] = val;
        }
        else
        {
            Rear++;
            arr[Rear] = val;
        }
    }
    int Dequeue(){
        int x=0;
        if(isEmpty()){
            cout<<"Queue is Empty. "<<endl;
        }
        else if(Rear==Front){   // if front and rear are equal than it means that there is only one element left in the queue
                                // and it happens only one in list when there is only one element in the queue
            x=arr[Rear];
            Rear=-1;
            Front=-1;  
            return x;
        }
        else{
            x=arr[Front];
            arr[Front]=0;
            Front++; 
            return x;
        }
    }

    int Count()
	{
		if(Rear==-1 && Front==-1)
			return 0;
		else
		return Rear-Front+1;
	}
    void Display(){
        cout<<"All Element in the queue are: "<<endl;
        for(int i=0;i<5;i++){
            cout<<arr[i]<<" ";
        }
    }
         
    
};
int main()
{
    Queue Q;
    int option,value;
         do
         {
            cout << "\n\nWhat operation do you want to perform? Select Option number. Enter 0 to exit." << endl;
            cout << "1. Enqueue()" << endl;
            cout << "2. Dequeue()" << endl;
            cout << "3. isEmpty()" << endl;
            cout << "4. isFull()" << endl;
            cout << "5. Count()" << endl;
            cout << "6. Display()" << endl;
            cout << "7. Clear Screen" << endl << endl;
           cin >> option;

    switch (option) {
    case 0:
      break;
    case 1:
      cout << "Enqueue Operation \nEnter an item to Enqueue in the Queue" << endl;
      cin >> value;
      Q.Enqueue(value);
      break;
    case 2:
      cout << "Dequeue Operation \nDequeued Value : " << Q.Dequeue() << endl;
      break;
    case 3:
      if (Q.isEmpty())
        cout << "Queue is Empty" << endl;
      else
        cout << "Queue is not Empty" << endl;
      break;
    case 4:
      if (Q.isFull())
        cout << "Queue is Full" << endl;
      else
        cout << "Queue is not Full" << endl;
      break;
    case 5:
      cout << "Count Operation \nCount of items in Queue : " << Q.Count() << endl;
      break;
    case 6:
      cout << "Display Function Called - " << endl;
      Q.Display();
      break;
    case 7:
      system("cls");
      break;
    default:
      cout << "Enter Proper Option number " << endl;
    }

  } while (option != 0);

  return 0;
}