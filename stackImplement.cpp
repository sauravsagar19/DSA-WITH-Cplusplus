#include <iostream>
using namespace std;
class stack
{
public:
    int top;
    int arr[5];
    stack()
    {
        for (int i = 0; i < 5; i++)
        {
            top = -1;
            arr[i] = 0; // default constructor... we set a default stack values
        }
    }
    bool isfull()
    {
        if (top == 4)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    bool isempty()
    {
        if (top == -1)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    void push(int val)
    {
        if (isfull())
        {
            cout << "Stack overflow" << endl;
        }
        else
        {
            top++;
            arr[top] = val;
        }
    }
    int pop()
    {
        if (isempty())
        {
            cout << "Stack underflow" << endl;
        }
        else
        {
            int popvalue = arr[top];
            arr[top] = 0;
            top--;
            return popvalue;
        }
    }
    int count()
    {
        return (top + 1);
    }
    int peek(int position)
    {
        if (top = -1)
        {
            cout << "Stack underflow" << endl;
        }
        else
        {
            return arr[position];
        }
    }
    void change(int position, int value)
    {
        arr[position] = value;
        cout << "The value changed at postion " << position << " with the value " << value << endl;
    }
    void Display()
    {
        cout << "All the values in the stack are: " << endl;
        for (int i = 4; i >= 0; i--)
        {
            cout << arr[i] << endl;
        }
    }
};
int main()
{
    stack s;
    int option, position, value;
    do // menu driven program
    {
        cout << "What operation you wannna do from the menu (Enter 0 to exit)......... " << endl;
        cout << "1. push()" << endl;
        cout << "2. pop()" << endl;
        cout << "3. isempty()" << endl;
        cout << "4. isfull()" << endl;
        cout << "5. peek()" << endl;
        cout << "6. count()" << endl;
        cout << "7. change()" << endl;
        cout << "8. Display()" << endl;
        cout << "9. Clear Screen" << endl
             << endl;
        cin >> option;
        switch (option)
        {
        case 1:
            cout << "Enter an element to push: " << endl;
            cin >> value;
            s.push(value);
            break;
        case 2:
            cout << "Pop function called " << endl;
            s.pop();
            break;
        case 3:
            if (s.isempty())
            {
                cout << "stack is empty " << endl;
            }
            else
            {
                cout << "stack is not empty " << endl;
            }
            break;
        case 4:
            if (s.isfull())
            {
                cout << "stack is full " << endl;
            }
            else
            {
                cout << "stack is not full" << endl;
            }
            break;
        case 5:
            cout << "Enter position of item you want to peek: " << endl;
            cin >> position;
            s.peek(position);
            break;
        case 6:
            cout << "Count function is called: ";
            cout << "count = " << s.count() << endl;
            break;
        case 7:
            cout << "Enter the position and value: " << endl;
            cin >> position >> value;
            s.change(position, value);
            break;
        case 8:
            cout << "Display() function called......" << endl;
            s.Display();
            break;
        case 9:
            system("cls");
            break;
        default:
            cout << "Enter proper Menu number: " << endl;
            break;
        }
    } while (option != 0);

    return 0;
}