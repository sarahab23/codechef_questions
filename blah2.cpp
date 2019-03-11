#include <bits/stdc++.h>
using namespace std;
int N,S[1000000];
const int M = 1000000007;

int main(int argc, char** argv)
{
    int T,i,n,N=0,k;
    T=argc-1;
    for(i=1;i<=T;i++)
    {
        k=0;
        N=atoi(argv[i]);
        for(i=0;i<N;i++)
            cin>>S[i];
        n = sizeof(S)/sizeof(S[0]);
        std::sort (S, S+n, std::greater<int>());

       for(i=1;i<N;i++)
       {
              k=(k+1)%M;
              if(S[i]!=S[i+1])
                break;

       }
        cout<<k<<endl;
       }
    return 0;
}
