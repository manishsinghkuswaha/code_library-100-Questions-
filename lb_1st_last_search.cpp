#include<iostream>
using namespace std;
int main()
{
    int t,n,x,i,f;
    cin>>t;
    while(t--){
        cin>>n>>x;
        int a[n];

        int f=-1,l=-1;
        for(i=0;i<n;i++){
            cin>>a[i];
            if(x!=a[i]){
                continue;
            }
            if(f == -1){
                f=i;
            }
            l = i;
        }
        if(f!=-1){
            cout<<f<<" "<<l<<endl;
        }
        else{
            cout<<"-1"<<endl;
        }
    }
    return 0;
}
© 2021 GitHub, Inc.
