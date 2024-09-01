

//count bits problem 
#include <iostream>
using namespace std;

int count_bit(int n)
{
    int count=0;
    while(n>0){
    int last_bit=(n&1);
    
    count+=last_bit;
    n=n>>1;
    }
    return count;
}
int main()
{
  int n;
  cin>>n;
  
  cout <<count_bit(n)  << endl;
  
 
}