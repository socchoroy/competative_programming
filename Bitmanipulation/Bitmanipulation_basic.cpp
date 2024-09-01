#include<iostream>


using namespace std;

//get the ith bit zero or one
int getIthElement(int n,int i)
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

//set the ith bit zero to one and one to zero
void setIthBit(int &n,int i)
{
    int mask=(1<<i);
    
    n=(n|mask);
}

int main()
{
    int n,i;
    cin>>n;
    cin>>i;
    cout<<getIthElement(n,i)<<"\n";
     cout<<clearIthBit(n,i)<<"\n";
     setIthBit(n, i);
     cout<<n<<"\n";
}