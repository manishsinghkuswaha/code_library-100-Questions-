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
    for(int i=0; i<n; i++)
    {
        arr[arr[i]%n]+=n;
        
    }
    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
        
    }
    cout<<"\n";
    for(int i=0; i<n; i++)
    {
        if(arr[i]/n>1)
        {
            cout<<arr[i]%n<<" ";
        }
    }
}
