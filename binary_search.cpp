#include<bits/stdc++.h>
using namespace std;

int bs(int arr[],int l, int r, int x)
{
    int mid;
    if(r>=l)
    {
        int mid=(l+r)/2;
        if(arr[mid]==x)
        {
            return mid+1;
        }
        else if(arr[mid]>x)
        {
            return bs(arr,l,mid-1,x);
        }
        else
        {
            return bs(arr,mid+1,r,x);
        }
    }
    return -1;
}
int main()
{
    int n,x;
    cin>>n>>x;
    int a[n];
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    int asize=sizeof(a)/sizeof(a[0]);
    sort(a,a+asize);
    for(int i=0; i<asize; i++)
    {
        cout<<a[i]<<" ";
    }
    int result=bs(a,0,n-1,x);
    if(result==-1)
    {
        cout<<"element not found";
    }
    else
    {
        cout<<"element found at: "<<result;
    }
}
