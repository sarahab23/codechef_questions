#include<iostream>
using namespace std;
int main()
{
int T;
cin>>T;
while(T--)
{
    int N,K,i,A[N],s=0;
    cin>>N>>K;
    for(i=1;i<=N;i++)
    {
        cin>>A[i];
        if(A[i]!=1)
            s++;
    }
    if(K>=s)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
}
return 0;
}
