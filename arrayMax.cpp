#include<iostream>
#include<climits>
using namespace std;
int main()
{
    int n, i;
    cin>>n;
    int array[n];
    for(i = 0; i < n; i++){
        cin>>array[i];
    }
    int maxi=INT_MIN,mini=INT_MAX;
    for(i = 0; i < n; i++){

        if(array[i]>maxi){
            maxi=array[i];
        }
        if(array[i]<mini){
            mini=array[i];
        }
    }

    cout<<maxi<<" "<<mini<<endl;
    return 0;
}
