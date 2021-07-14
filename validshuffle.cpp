#include <bits/stdc++.h>
#include<string.h>
using namespace std;

int main() {
	// your code goes here
	string s1,s2,res;
	cin>>s1>>s2>>res;
	int l1=s1.length();
	int l2=s2.length();
	int lr=res.length();
	if(l1+l2!=lr)
	{
	    cout<<"no";
	}
	else{
	    int flag=0;
	    int i=0,j=0,k=0;
	    while(k<lr)
	    {
	        if(i<l1 && s1[i]==res[k])i++;
	        else if(j<l2 && s2[j]==res[k])j++;
	        else{
	            flag=1;
	            break;
	        }
	        k++;
	    }
	    if(i<l1 && j<l2)
	    {
	        cout<<"no";
	    }
	    else{
	        cout<<"yes";
	    }
	}
	return 0;
}
