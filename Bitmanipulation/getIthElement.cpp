#include<iostream>


using namespace std;


int getIthElement(int n,int i)
{
    int mask=(1<<i);
    return (n&mask)>0 ? 1:0;
}

int main()
{
    int n,i;
    cin>>n;
    cin>>i;
    cout<<getIthElement(n,i)<<"\n";
}