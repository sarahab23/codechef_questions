#include<bits/stdc++.h>
using namespace std;
int main()
{
int T,N,K,i,c,b;
cin>>T;
while(T--)
{
c=0;
cin>>N>>K;
int S[N];
for(i=0;i<N;i++)
{
cin>>S[i];
}
sort(S,S+N);
reverse(S,S+N);
b=S[K-1];
for(i=K;i<N;i++)
{
if(S[i]==b)
c++;
}
cout<<c+K;
}
return 0;
}
