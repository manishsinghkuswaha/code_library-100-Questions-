#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    cin.ignore();
    char a[n+1];
    cin.getline(a,n);
    cin.ignore();
    int i=0;
    int curlen=0;
    int maxlen=0;
    int st=0,maxst=0;
    while(1){
        if(a[i]=='\0' || a[i]==' '){
            if(curlen>maxlen){
                maxlen=curlen;
                maxst = st;
            }
            curlen=0;
            st = i+1;
        }
        else
           curlen++;
        if(a[i]=='\0')
            break;
        i++;
    }
    cout<<maxlen<<endl;
    for(i=0;i<maxlen;i++){
        cout<<a[i+maxst];
    }
    return 0;
}
