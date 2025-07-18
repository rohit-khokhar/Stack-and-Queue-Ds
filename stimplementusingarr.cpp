#include<iostream>
using namespace std;


//create stack using arr
class Stack{
  int arr[10];
  int top;

  public:
   void push(int val) {
      if (top == 9)
      {
        cout<<"stack is full. Cannot push value"<<endl;
      }
      
      else{
                  arr[++top] = val;
    }
   }

    int pop(){
       if (top == -1)
       {
         cout<<"stack is empty"<<endl;
       }

       else{
        return arr[top--];
       }
       
    }

int peek(){
    if (top == -1)
    {
        cout<<"stack empty"<<endl;
        return -1;
    }

    else{
        return arr[top];
    }
    
}

    bool isEmpty(){
       return top == -1;

    }


    
    bool isFull(){
       return top == 9;

    }
};
int main()
{
    Stack s;
    s.push(1);
    s.push(2);
    s.push(3);


    cout<<"peek : "<<s.peek()<<endl;
    // cout<<"pop : "<<s.pop()<<endl;
    cout<<"isEmpty?"<<s.isEmpty()<<endl;
    cout<<"isFull?"<<s.isFull()<<endl;
    
   
    return 0;
}
