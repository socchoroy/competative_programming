//find unique number where the number is (2n+2) and unique value is two 

#include <iostream>
#include <vector>
using namespace std;


void uniqueNoTwo(vector<int>arr,int n)
{
    int result=0;
    for (int i = 0; i < n; i++) {
        result=result^arr[i];
    }
    
    int pos=0;
    int temp=result;
    while((temp&1)==0)
    {
        pos++;
        temp=temp>>1;
    }
    
    int setA=0;
    int setB=0;
    int mask=(1<<pos);
    
    for (int i = 0; i < n; i++) {
        if(arr[i]&mask>0)
        {
            setA=setA^arr[i];
        }
        else
        {
            setB=setB^arr[i];
        }
    }
    cout<<"Two Unique value is : ";
    cout<<setA<<" ";
    cout<<setB ;
}


int main()
{
  vector<int>arr;
  int n;
  cout<<"size ";
  cin>>n;
  for (int i = 0; i < n; i++) {
      int no;
      cout<<"number : ";
      cin>>no;
   arr.push_back(no);
  }
  
  uniqueNoTwo(arr, n);
}