#include<bits/stdc++.h>
using namespace std;
int main()
{
    int N,Q,K,i,c=0,u=0,t,j,l,x,y,d;
    cin>>N>>Q>>K;
    char S[Q];
    vector<int> A[1],B[1];
    for(i=1;i<=N;i++)
    {
     cin>>x;
     A[x].push_back(i);
    }
    scanf("%s",S);
    for(l=0;l<Q;l++)
    {
        if(S[l]=='?')
        {
            y=A[1].size();
            for(i=0;i<y;i++)
            {
                if((A[1][i]+1)==A[1][i+1])
                {
                    u++;
                }
                else
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
          for(i=0;i<=1;i++)
          {
            y=A[i].size();
            if(A[i][y-1]==N)
              {
                    for(j=y-2;j>=0;j--)
                    {
                        A[i][j+1]=A[i][j] + 1;
                    }
                    A[i][0]=1;
                 }
                else
                {
                    for(j=0;j<=(y-1);j++)
                       A[i][j]=A[i][j] + 1;
                }
            }
          }
        }
    }
