#include<bits/stdc++.h>
using namespace std;
int main()
{
int T,N,K;
cin>>T;
while(T--)
{
cin>>N>>K;
int S[N];
for(int i=0;i<N;i++)
cin>>S[i];
sort(S,S+N);
reverse(S,S+N);
int b=S[K-1];int c=0;
for(int i=K;i<N;i++)
{
if(S[i]==b)
c++;
}
cout<<c+K;
}

}
