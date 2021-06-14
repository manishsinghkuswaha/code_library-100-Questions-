#include<bits/stdc++.h>
using namespace std;
 
int main()
{
  unordered_map<int,int>mp;
  int n,m;
  cin>>n,m;
  int a[n];
  for(int i=0; i<=n; i++)
  {
      cin>>a[i];
      mp[a[i]]++;
  }
  
  int b[m];
  for(int j=0; j<=m; j++)
  {
      cin>>b[j];
      mp[b[j]]++;
  }
  cout<<mp.size()<<endl;
  
}

