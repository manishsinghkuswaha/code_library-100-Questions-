#include<iostream>
using namespace std;
int main()
{
    int n,i,flag=0;
    cin>>n;
    char str[n];
    cin>>str;
    for(i=0;i<n;i++){
        if(str[i]!=str[n-i-1]){
           flag=1;
           break;
        }
    }
    if(flag){
        cout<<"0"<<endl;
    }
    else{
        cout<<"1"<<endl;
    }
    return 0;
}
