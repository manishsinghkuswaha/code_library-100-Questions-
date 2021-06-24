#include<iostream>
using namespace std;
int main()
{
    int n,k;
    cin>>n>>k;
    if(n&(1<<(k-1)))
        cout<<"SET";
    else
        cout<<"NOT SET";
    return 0;
}
