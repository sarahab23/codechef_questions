#include<iostream>
using namespace std;
#include<string.h>
int main()
{
    int N,Q,K,i,c=0,u=0,t,j,l;
    cin>>N>>Q>>K;
    char S[Q];int A[N+1],B[N+1];
    for(i=1;i<=N;i++)
        cin>>A[i];
    scanf("%s",S);
    for(l=0;l<Q;l++)
    {
        if(S[l]=='?')
        {
            for(i=1;i<=N;i++)
            {
                if(A[i]==1)
                {
                   u++;
                }
                else if(A[i]==0)
                {
                    if(c<u)
                    {
                        c=u;
                    }
                    u=0;
                }
            }
            if(c<u)
            {
                c=u;
            }
            u=0;
            if(c>K)
                c=K;
            cout<<c<<endl;
            c=0;
        }
        else if(S[l]=='!')
        {
          t=A[N];
          for(i=1,j=2;i<=(N-1);i++,j++)
          {
                B[j]=A[i];
          }
          B[1]=t;
          for(i=1;i<=N;i++)
          {
                A[i]=B[i];
          }
        }
    }
}
