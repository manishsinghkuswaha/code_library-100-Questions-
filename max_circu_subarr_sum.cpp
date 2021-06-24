#include<iostream>
#include<climits>
using namespace std;
int kadane(int a[],int n)
{
    int i,cursum=0;
    int maxisum = INT_MIN;
    for(i=0;i<n;i++){
        cursum += a[i];
        if(cursum<0){
            cursum=0;
        }
        maxisum = max(maxisum,cursum);
    }
    return maxisum;
}
int main()
{
    int n,i,j;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    int wrapsum;
    int nonwrapsum;
    nonwrapsum=kadane(a,n);
    int totalsum = 0;
    for(i=0;i<n;i++){
        totalsum += a[i];
        a[i] =- a[i];
    }
    wrapsum = totalsum + kadane(a,n);
    cout<<max(wrapsum,nonwrapsum);
    return 0;
}
