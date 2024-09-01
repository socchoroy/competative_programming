
//clean and replace value with new value
#include <iostream>
using namespace std;

void clearWithinRange(long int &n,int i,int j)
{
    int a=(-1)<<(j+1);
    int b=(1<<i)-1;
    int mask=a|b;
    n=(n&mask);
}

void clearAndReplace(long int &n,int i,int j,int m){
    clearWithinRange(n,i,j);
    n=n|(m<<i);
}
int main()
{
   long int n=15;
   int m=2;
   int i=1,j=3;
   clearAndReplace(n,i,j,m);
   cout<<n<<"\n";
   
  
}