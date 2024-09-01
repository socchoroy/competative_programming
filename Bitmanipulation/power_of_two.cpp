

//find if the number is power of two
#include <iostream>
using namespace std;
int main()
{
  int n;
  cin>>n;
  
  if((n&(n-1))==0)
  {
      cout<<"power of 2";
  }
  else
  {
      cout<<"No"<<"\n";
  }
}