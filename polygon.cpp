
#include<bits/stdc++.h>
using namespace std;
int main()
{
int t;
cin>>t;
while(t--)
{
long long n,a,k,d,x,y,z;
cin>>n>>a>>k;
y=n*(n-1);
d=(360-(2*a))*n-720;
x=a*y+((k-1)*d);
z=__gcd(x,y);
cout<<x/z<<" "<<y/z;
}
return 0;
}
