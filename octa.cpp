#include<iostream>
#include<math.h>
using namespace std;
int dec_octal(int n)
{
    int ans = 0;
    int x = 1;
    while(x <= n)
    {
        x *=8;
    }
    x /=8;
    while(x>0)
    {
        int temp = n/x;
        n -= temp*x;
        x/=8;
        ans = ans*10 + temp;
    }
    return ans;
}
int main()
{
    int n;
    cin>>n;
    cout<<dec_octal(n)<<endl;

}
