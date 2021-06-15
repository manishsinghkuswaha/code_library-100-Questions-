#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,k;
    cin>>n>>k;
    int a[n];
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    sort(a,a+n);
    if(a[0]<=k)
    {
        a[0]+=k;
    }
    else{
        a[0]-=k;
    }
    a[n-1]-=k;
    int diff=a[n-1]-a[0];
    cout<<diff;
    
}
