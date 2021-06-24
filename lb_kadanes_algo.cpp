#include <bits/stdc++.h>
using namespace std;
int maxsubarrsum(int a[], int n)
{
    int maxi = INT_MIN, max_ending_here = 0;

    for (int i = 0; i < n; i++)
    {
        max_ending_here = max_ending_here + a[i];
        if (maxi < max_ending_here)
            maxi = max_ending_here;

        if (max_ending_here < 0)
            max_ending_here = 0;
    }
    return maxi;
}
int main() {
	int n,i,t;
	cin>>t;
	while(t--){
	    cin>>n;
	    int a[n];
	    for(i=0;i<n;i++){
	        cin>>a[i];
	    }
    cout<<maxsubarrsum(a,n);
	}
	return 0;
}
