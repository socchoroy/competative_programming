


// CPP Program to implement Deque in STL where queue follow fifo rulest 
#include <queue>
#include <iostream>



using namespace std;



class compare{
    public: bool operator ()(int a,int b){
        return a>b;
    }
};
int main()
{
  int arr[]={21,13,5,90,87,2};
  int n =sizeof(arr)/sizeof(int);
  
  
  priority_queue<int,vector<int>,compare>heap;
  for (int i : arr) {
      heap.push(i);
  }
  while(!heap.empty())
  {
      cout<<heap.top()<<" ";
      heap.pop();
  }
  
 
    
}