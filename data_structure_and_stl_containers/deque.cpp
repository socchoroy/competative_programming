


// CPP Program to implement Deque in STL where the use cases is you can add and pop from back and front 
#include <deque>
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
   int n;
   cin>>n;
   deque<int> d;
   
   for (int i = 0; i < n; i++) {
       int no;
       cin>>no;
       if(i%2==0)
       d.push_back(no);
       else
       d.push_front(no);
       
   }
   //before pop operation
    for (int i : d) {
       cout<<i<<"  ";
   }
   
    for (int i = 0; i < n; i++) {
       
       if(i%2==0)
       d.pop_back();
      
       
   }
   //after pop operation
   for (int i : d) {
       cout<<i<<" ";
   }
    
}