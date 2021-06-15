#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n; 
    cin>>n; 
    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    int x=arr[n-1],i;
    for(i=n-1; i>0; i--)
    {
        arr[i]=arr[i-1];
       
    }
     arr[0]=x;
    
    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
}
