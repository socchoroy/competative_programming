
//take a (2n+1) number and find the unique number using best algo where the time is O(n) and space is O(1);
#include <iostream>
#include <vector>
using namespace std;

int uniqueNumber(vector<int>no,int n)
{

    int cxor=0;
    for (int i = 0; i < n; i++) {
        cxor=cxor^no[i];
    }
    return cxor;
  
}





int main()
{
    

   
      vector<int> no;
   cout<<"how many number you want to push"<<"\n";
   int n;
   cin>>n;
   for (int i = 0; i < n; i++) {
       int number;
       cout<<"Please enter the number"<<"\n";
       cin>>number;
       no.push_back(number);
   }
   cout<<"unique value is "<<uniqueNumber(no,n);
   
   
   
   
   
}