#include <bits/stdc++.h>
#define ll long long int
#define loop for(ll i=0;i<n;i++)
using namespace std;
ll gcd(ll a,ll b)
{
    if (a == 0)
        return b;
    return gcd(b%a, a);
}
int main(){
    int t;cin>>t;
    while(t--){
        ll n,a,k;cin>>n>>a>>k;
        ll nume=a*n*(n-1)+(k-1)*(n-2)*360-2*a*n*(k-1);
        ll deno=n*(n-1);
        ll g=gcd(nume,deno);
        nume=nume/g;
        deno=deno/g;
        cout<<nume<<" "<<deno<<endl;
    }return 0;
}

