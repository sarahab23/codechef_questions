#include<iostream>
using namespace std;
int main()
{
int t;
cin>>t;
while(t!=0)
{
    int n,a[n],i,j,k,c=0,u,s=1,v=1;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cin>>a[i];
    }
    j=n;
    while(j!=0)
    {
        c=a[j];
        for(i=1;i<j;i++)
        {
            if(c==a[i])
            {
            u=i;
            for(k=1;k<=n;k++)
            {
                if(a[k]==u)
                {
                    s--;
                }
                else if(a[k]==j)
                {
                    v--;
                }
            }
        if((s<=0)&&(v<=0))
        {
            cout<<"Truly Happy"<<endl;
            goto free;
        }
        }
       }
     j--;
        if(j==0)
        cout<<"Poor Chef";
    }
    free:
    t--;
}
return 0;
}
