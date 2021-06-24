#include<iostream>
using namespace std;
int main()
{
    int n,i;
    cin>>n;
    char str[n];
    cin>>str;
    for(i=n-1;i>=0;i--){
        cout<<str[i];
    }
return 0;
}
