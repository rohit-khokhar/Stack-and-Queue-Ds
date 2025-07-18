#include<iostream>
#include<vector>
#include<string>
using namespace std;


//create stack using 
template<class T>
class Stack{
  vector<T> vec;

  public:
   void push(T val) {
         vec.push_back(val);
    }


    int pop(){
        if (isEmpty())
        {
            cout<< "stack is empty\n";
            return -1;
        }
        
        vec.pop_back();
    }

    T top(){
      int lastIdx = vec.size()-1;
        return vec[lastIdx];

    }

    bool isEmpty(){
       return vec.size() == 0;

    }
};
int main()
{
    Stack<string> s;
    s.push("car");
    s.push("bus");
    s.push("aeroplane");

   while (!s.isEmpty())
   {
       cout<< s.top() << " ";
       s.pop();
   }
     cout<<endl;
    return 0;
}
