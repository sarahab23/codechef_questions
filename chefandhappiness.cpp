#include<bits/stdc++.h>
using namespace std;
#include<vector>
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,x,i,j,k=1,u=0,l;
        cin>>n;
        vector<int> v[n+1], m;
        for(i=1;i<=n;i++)
        {
            cin>>x;
            v[x].push_back(i);
        }
        for(i=1;i<=n;i++)
        {
            l=v[i].size();
            if(l>1)
            {
                for(j=0;j<l;j++)
                {
                  m.push_back(v[i][j]);
                }
               /* k=n;
                while(k!=0)
                {
                  if(v[k].size()!=0)
                  {
                    for(j=0;j<l;j++)
                    {
                        if(v[k]==m[j])
                        {
                        u++;
                        }

                    }
                    if(u>1)
                        break;
                  }
                  k--;
                }*/
                for(j=0;j<l;j++)
                {
                    if(v[m[j]].size()> 0)
                        u++;
                }
                if(u>1)
                {
                    cout<<"Truly Happy"<<endl;
                    break;
                }
                u=0;

            }
        }
        if(u==0)
          cout<<"Poor Chef"<<endl;
    }
    return 0;
}
