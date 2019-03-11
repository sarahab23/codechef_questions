#include<iostream>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        int n,c=2,i,x,y;
        double a=0,b=0.5,temp;
        cin>>n;
        if(n>=1)
        {
            for(i=1;i<n;i++)
            {
                c=c*2;
                temp=b;
                b=(b+a)/2;
                a=temp;
            }
            x=b*c;y=c;
            cout<<x<<" "<<y<<" ";
        }

    }
    return 0;
}
