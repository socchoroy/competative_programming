#include<iostream>
using namespace std;
//to know zero or one
int getIthBit(int n,int i)
{
    int mask=(1<<i);
    return (n&mask)>0 ? 1:0;
}

//clear the ith bit if the ith bit is one then clear it to zero
int clearIthBit(int &n,int i)
{
    int mask=~(1<<i);
    return n=(n&mask);
}

//update the bit with zero or one
void updateIthBit(int &n,int i,int val)
{
    clearIthBit(n,i);
    
    int mask=(val<<i);
    n=(n|mask);
    
}


void clearLastBit(int &n,int i)
{
    int mask=(-1<<i);
     n=(n&mask);
    
}
int main()
{
    
    int t;
    cin>>t;
    while(t)
    {
    t--;
    int n,i;
    cin>>n;
    cin>>i;
    cout<<getIthBit(n,i)<<"\n";
    cout<<"which pos you want to update?"<<"\n";
    cin>>i;
    cout<<"zero or one?"<<"\n";
    int val;
    
    cin>>val;
     
 
     updateIthBit(n,i,val);
     cout<<"The updated Value is"<<"\n";
     cout<<n<<"\n";
     cout<<"From where you want to clear"<<"\n";
     cin>>i;
     clearLastBit(n,i);
     
     cout<<"The clear updated Value is"<<"\n";
     cout<<n<<"\n";
     
     
     
    }
}