#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long n;
    cin>>n;
    long long sum=0;
    long long count=0;
    long long i=1;
    while(n>sum)
    {
        sum+=i;
        i++;
        count++;
    }
    if(sum%n>0)
    {
         cout<<count;
    }
    else{
        cout<<count;
    }
   
}
