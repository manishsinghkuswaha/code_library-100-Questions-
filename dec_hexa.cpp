#include<bits/stdc++.h>
#include<math.h>
using namespace std;
string dec_hexa(int n)
{
    string ans = "";
    int x = 1;
    while(x <= n)
    {
        x *=16;
    }
    x /=16;
    while(x>0)
    {
        int temp = n/x;
        n -= temp*x;
        x/=16;
        if(temp <= 9){
           ans = ans + to_string(temp);
        }
        else{
            char c = 'A' + temp - 10;
            ans.push_back(c);
    }
    }
    return ans;
}
int main()
{
    int n;
    cin>>n;
    cout<<dec_hexa(n)<<endl;

}
