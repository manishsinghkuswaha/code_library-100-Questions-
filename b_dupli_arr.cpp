#include<iostream>
using namespace std;
int main()
{
    int n,i,j,t;
    cin>>t;
    while(t--){
    cin>>n;
    int a[n];
    for(i=0;i<n;i++){
        cin>>a[i];
    }
       for(i=0;i<n-1;i++){
            for(j=i+1;j<n;j++){
                if(a[j]<a[i]){
                    int temp = a[j];
                    a[j]=a[i];
                    a[i]=temp;


                }
       }
    }

    for(i=0;i<n;i++){
         if(a[i]==a[i+1]){
        cout<<a[i];
    }
    }
    }
    return 0;
}
