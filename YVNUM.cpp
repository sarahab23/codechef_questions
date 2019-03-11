#include<iostream>
#include<math.h>
using namespace std;
long int n,m;
long long int l=0;
int main()
{
    int t;
    cin>>t;
    while(t!=0)
    {
        int i,c=0,j,k;
        cin>>n;
        m=n;
        while(m>0)
        {
            m=m/10;
            c++;
        }
        m=n;
        for(i=1;i<=c;i++)
        {
            k=c*(c-i);
            l=l+(m*pow(10,k));
            j=m/pow(10,c-1);
            m=(m-(j*pow(10,c-1)))*10;
            m=m+j;
            if(m==n)
                break;
        }
        cout<<l%1000000007;
        t--;
    }
    return 0;
}
