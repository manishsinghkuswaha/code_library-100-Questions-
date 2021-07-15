#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int n; 
	cin>>n;
	if(n==1)cout<<"1";
	if(n==2)cout<< "11";
	string s="11";
	for(int i=3; i<=n; i++)
	{
	    string t="";
	    s+="&";
	    int cnt=1;
	    
	     for(int j=1; j<s.length(); j++)
            {
                if(s[j]!=s[j-1])
                {
                    t+=to_string(cnt);
                    t+=s[j-1];
                    cnt=1;
                }
            else cnt++;
                
            }
            s=t;
        }
        cout<<s;
	
}
