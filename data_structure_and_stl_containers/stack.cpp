


// CPP Program to implement Deque in STL where the use cases is you can add and pop from back and front 
#include <stack>
#include <iostream>



using namespace std;

int main()
{
   int n;
   cin>>n;
   stack<string>book;
   
   for (int i = 0; i < n; i++) {
       string name;
       cin>>name;
      book.push(name);
       
   }
  
   while(!book.empty())
   {
       
       cout<<book.top()<<"  ";
       book.pop();
   }
   ///after printing the data want to see does anything left 
   while(!book.empty())
   {
       
       cout<<book.top()<<"  ";
       
   }
  
 
    
}