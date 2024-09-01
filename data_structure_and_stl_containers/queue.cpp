


// CPP Program to implement Deque in STL where queue follow fifo rulest 
#include <queue>
#include <iostream>



using namespace std;

int main()
{
   int n;
   cin>>n;
   queue<int>no;
   
   for (int i = 0; i < n; i++) {
       int ni;
       cin>>ni;
       no.push(ni);
       
   }
   
 while (!no.empty())
   {
       cout << no.front() << "  ";  // Print the front element
       no.pop();  // Pop the front element to move to the next one
   }
  
 
    
}