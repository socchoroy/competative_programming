

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int n;
    cin >>n ;
    
    vector<int>v;
    //for reserve hundred of space because if not reserve then vector gonna double its capacity which is expensive
    v.reserve(100);
    
    for (int i = 0; i < n; i++) {
      int no;
      cin>>no;
      v.push_back(no);
      
    }
    
    cout<<"size  "<<v.size()<<" capacity  "<<v.capacity() <<  '\n';
    
    sort(v.begin(),v.end());
    
    for (int i : v) {
      cout<<i<<" ";
    }
    
}