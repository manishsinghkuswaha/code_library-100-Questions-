#include <bits/stdc++.h>
#include<string.h>
using namespace std;

int main() {
	// your code goes here
	string str1,str2;
	cin>>str1>>str2;
	string temp = str1+str1;
	if(str1.length()!=str2.length())
	{
	    cout<<"F";
	}
	else if(temp.find(str2) != string::npos)
	{
	    cout<<"T";
	}
	else{
	    cout<<"F";
	}
	
	return 0;
}
