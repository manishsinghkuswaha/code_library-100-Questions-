#include<iostream>
using namespace std;
int main()
{
    int n,i,sum=0;
    cin>>n;
    int array[n];
    for(i=0;i<n;i++){
        cin>>array[i];
    }
    for(i=0;i<n;i++){
        sum += array[i];
    }
    cout<<sum<<endl;
    return 0;
}
