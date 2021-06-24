#include<iostream>
using namespace std;
void merge(int a1[],int m,int a2[],int n)
{
    int i,j;
    for(i=n-1;i>=0;i--){
        int last = a1[m-1];
        for(j=m-2;j>=0 && a1[j]>a2[i];j--){
            a1[j+1] = a1[j];
        }

        if(j!=m-2 || last > a2[i])
        {
            a1[j+1] = a2[i];
            a2[i] = last;
        }

    }
}
int main()
{
    int m,n,i,j;
    cin>>m>>n;
    int a1[m];
    int a2[n];
    for(i=0;i<m;i++){
        cin>>a1[i];
    }
    for(j=0;j<n;j++){
        cin>>a2[j];
    }
    merge(a1,m,a2,n);
    for(i=0;i<m;i++){
        cout<<a1[i]<<" ";
    }cout<<endl;
    for(j=0;j<n;j++){
        cout<<a2[j]<<" ";
    }
    return 0;
}
