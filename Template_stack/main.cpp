#include <iostream>
#include <cstdlib>
using namespace std;
 

#define SIZE 10
 
// A class to represent a stack
template <class T>
class stack
{
    T *arr;
    int top;
    int capacity;
 
public:
    stack(int size = SIZE);        
 
    void push(T);
    X pop();
    X peek();
 
    int size();
    bool isEmpty();
    bool isFull();
 
    // destructor
    ~stack() {
        delete[] arr;
    }
};
 

template <class T>
stack<T>::stack(int size)
{
    arr = new T[size];
    capacity = size;
    top = -1;
}
 

template <class T>
void stack<T>::push(T x)
{
    if (isFull())
    {
        cout << "Overflow\nProgram Terminated\n";
      
    }
 
    cout << "Inserting " << x << endl;
    arr[++top] = x;
}
 

template <class T>
T stack<T>::pop()
{
  
    if (isEmpty())
    {
        cout << "Underflow\nProgram Terminated\n";
        
    }
 
    cout << "Removing " << peek() << endl;
 
    /
    return arr[top--];
}
 

template <class T>
T stack<T>::peek()
{
    if (!isEmpty()) {
        return arr[top];
    }
    else {
       cout<<"Failure"<<endl;
    }
}
 

template <class T>
int stack<T>::size() {
    return top + 1;
}
 

template <class T>
bool stack<T>::isEmpty() {
    return top == -1;               
 

template <class T>
bool stack<T>::isFull() {
    return top == capacity - 1;     
}
 
int main()
{
    stack<string> pt(2);
 
    pt.push("A");
    pt.push("B");
 
    pt.pop();
    pt.pop();
 
    pt.push("C");
 
    cout << "The top element is " << pt.peek() << endl;
 
   
    cout << "The stack size is " << pt.size() << endl;
 
    pt.pop();
 
  
    if (pt.isEmpty()) {
        cout << "The stack is empty\n";
    }
    else {
        cout << "The stack is not empty\n";
    }
 
    return 0;
}










