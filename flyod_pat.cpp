#include<iostream>
using namespace std;
int main()
{
    int n, i, j;
    int cnt=1;
    cin>>n;
    for(i=1;i<=n;i++){
        for(j=1;j<=i;j++){
        cout<<cnt<<" ";
        cnt++;
    }
    cout<<"\n";
    }
    return 0;
}
