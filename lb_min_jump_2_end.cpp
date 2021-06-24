#include<iostream>
using namespace std;
int main()
{
    int n,t,i;
    cout<<"how many times program should run\n";
    cin>>t;
    while(t--){
    cout<<"size of array\n";
    cin>>n;
    int a[n];
    cout<<"enter array\n";
    for(i=0;i<n;i++){
        cin>>a[i];
    }

        int count=0;
    for(i=0;i<n;i++)
    {
        if(a[i]==0)
        {
            cout<<"-1"<<endl;

        break;
        }
        int temp = a[i];
        i = temp;
        count++;

    }
    cout<<count-1<<endl;
    }
    cout<< minJumps(arr, n);
    return 0;
}
#include <bits/stdc++.h>
using namespace std;

// Function to return the minimum number
// of jumps to reach arr[h] from arr[l]
int minJumps(int arr[], int n)
{

    // Base case: when source and
    // destination are same
    if (n == 1)
        return 0;

    // Traverse through all the points
    // reachable from arr[l]
    // Recursivel, get the minimum number
    // of jumps needed to reach arr[h] from
    // these reachable points
    int res = INT_MAX;
    for (int i = n - 2; i >= 0; i--) {
        if (i + arr[i] >= n - 1) {
            int sub_res = minJumps(arr, i + 1);
            if (sub_res != INT_MAX)
                res = min(res, sub_res + 1);
        }
    }

    return res;
}

