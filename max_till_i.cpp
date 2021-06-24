#include<iostream>
using namespace std;
int main()
{
    int n,i;
    int mx = -19999999;
    cout<<"enter array size\n";
    cin>>n;
    int arr[n];
    cout<<"enter the array\n";
    for(i=0;i<n;i++){
        cin>>arr[i];
    }
    for(i=0;i<n;i++){
        mx = max(mx,arr[i]);
        cout<<mx<<" ";
    }
}
