#include<iostream>
using namespace std;
#include<math.h>
int main()
{
int T;
cin>>T;
while(T--)
{
    int N,K,i,A[N];
    long long t=0,s=0;
    cin>>N>>K;
    for(i=1;i<=N;i++)
    {
        cin>>A[i];
        s=s+A[i];
        t=t+pow(A[i],2);
    }
    if(t<=s)
    cout<<"YES"<<endl;
    else
    {
        for(i=1;i<=N;i++)
        {
            if(A[i]!=1)
             {
                A[i]=1;
                K--;
             }
             if(K==0)
             {
             break;
             }
        }
        for(i=1;i<=N;i++)
        {
        s=0;t=0;
        s=s+A[i];
        t=t+pow(A[i],2);
        }
        if(t<=s)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
}
return 0;
}
