

#include <iostream>
using namespace std;

//update the value in range 
void updateInRange(int &n,int i,int j)
{
    int a=(-1)<<(j+1);
    int b=(1<<i)-1;
    
    int mask=a|b;
    
     n=(n&mask);
}

int main()
{
    int n,i,j;
    cin>>n>>i>>j;
    updateInRange(n,i,j);
    cout<<n<<"\n";
    
    
}