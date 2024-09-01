

#include <iostream>
using namespace std;

int countBitHacks(int &n)
{
   int count=0;
   
   while(n>0)
   {
       n=n&(n-1);
       count++;
       
   }
   return count;
}


int main()
{
   //counting bit hacks
   
   int n;
   cin>>n;
   cout<<countBitHacks(n)<<"\n";
   
}