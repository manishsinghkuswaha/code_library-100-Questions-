#include<iostream>
using namespace std;
void fibbo(int n)
{
    int i,c;
    int a=0;
    int b=1;
    for(i=1;i<=n;i++){
        cout<<a<<endl;
        c=a+b;
        a=b;
        b=c;
}

    return;
}
int main()
{
    int n;
    cin>>n;
    fibbo(n);
    return 0;
}
