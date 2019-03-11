#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m,i,s=0;
        cin>>n>>m;
        int a[n+1],b[m+1];
        for(int i=1;i<=n;i++)
        {
            cin>>a[i];
        }
        for(i=1;i<=m;i++)
        {
            cin>>b[i];
        }
        if(n==m)
        {
            if(n==1)
                cout<<"Bob"<<endl;
            else
                {
                  sort(a, a+n);
                  sort(b, b+n);
                  for(i=1;i<=n;i++)
                  {
                    if(a[i]!=b[i])
                        s++;
                  }
                  if(s==0)
                    cout<<"Bob"<<endl;
                  else
                  cout<<"Alice"<<endl;
                }
        }
        else
        {
        cout<<"Alice"<<endl;
        }
    }
    return 0;
}
