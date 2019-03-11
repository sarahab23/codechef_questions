#include<iostream>
using namespace std;
#include<math.h>
int main()
{
int T;
cin>>T;
while(T--)
{
    int N,K,i,A[N],s=0,t=0;
    cin>>N>>K;
    for(i=1;i<=N;i++)
    {
        cin>>A[i];
        s=s+A[i];
        t=t+pow(A[i],2);
    }
    cout<<s<<endl<<t;
}
return 0;
}
