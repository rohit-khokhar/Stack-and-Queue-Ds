#include<iostream>
#include<stack>
#include<string>

using namespace std;

bool isValid(string str){
    stack<char> s;
    for (int i = 0; i < str.size(); i++)
    {
         char ch = str[i];
         if (ch == '(' || ch == '[' || ch =='{')
         {
             s.push(ch);
         } else {  //closing
             if(s.empty()){
                return false;
             }
       
              //match
              int top = s.top();
              if ( top  == '(' && ch == ')' || top  == '[' && ch == ']' || top  == '{' && ch == '}')
              {
                s.pop();
              } else{
                 return false;
              }
              
         }
         

    }
       return s.empty();
}
int main()
{
        string str1 = "([}])";
        string str2 = "([{}])";




   cout<<isValid(str1) << endl;
   cout<<isValid(str2) << endl;

    


    return 0;
}