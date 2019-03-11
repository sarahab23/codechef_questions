#include<iostream>
using namespace std;
int main()
{
    int t,m,i;
    cin>>t;
    while(t>0)
    {
        int x=0,y=0,w=0,z=0,p=0,q=0,c=0;
        cin>>m;
        int a[2*m],b[2*m];
        for(i=1;i<=2*m;i++)
        {
            cin>>a[i]>>b[i];
        }
        for(i=1;i<=2*m;i++)
        {
         if((i!=3)&&(i!=6))
         {
          p=a[i];q=b[i];
            while((p+1!=a[i+1])&&(p<a[i+1])&&(q==b[i+1]))
            {
                c++;
                p++;
            }

            while((p-1!=a[i+1])&&(p>a[i+1])&&(q==b[i+1]))
            {
            c++;
            p--;
            }

            while((q+1!=b[i+1])&&(q<b[i+1])&&(p==a[i+1]))
            {
            c++;
            q++;
            }

            while((q-1!=b[i+1])&&(q>b[i+1])&&(p==a[i+1]))
            {
            c++;
            q--;
            }

            while((p+1!=a[i+1])&&(q+1!=b[i+1])&&(p<a[i+1])&&(q<b[i+1]))
            {
            c++;
            p++;q++;
              while((p+1!=a[i+1])&&(p<a[i+1])&&(q==b[i+1]))
              {
                c++;
                p++;
              }
              while((q+1!=b[i+1])&&(q<b[i+1])&&(p==a[i+1]))
              {
                c++;
                q++;
               }
            }

            while((p-1!=a[i+1])&&(q-1!=b[i+1])&&(p>a[i+1])&&(q>b[i+1]))
            {
            c++;
            p--;q--;
                while((p-1!=a[i+1])&&(p>a[i+1])&&(q==b[i+1]))
                {
                    c++;
                    p--;
                }
                while((q-1!=b[i+1])&&(q>b[i+1])&&(p==a[i+1]))
                {
                    c++;
                    q--;
                }
            }

            while((p+1!=a[i+1])&&(q-1!=b[i+1])&&(p<a[i+1])&&(q>b[i+1]))
            {
            c++;
            p++;q--;
                while((p+1!=a[i+1])&&(p<a[i+1])&&(q==b[i+1]))
                {
                    c++;
                    p++;
                }
                while((q-1!=b[i+1])&&(q>b[i+1])&&(p==a[i+1]))
                {
                    c++;
                    q--;
                }
            }

            while((p-1!=a[i+1])&&(q+1!=b[i+1])&&(q<b[i+1])&&(p>a[i+1]))
            {
            c++;
            p--;q++;
                while((p-1!=a[i+1])&&(p>a[i+1])&&(q==b[i+1]))
                {
                    c++;
                    p--;
                }
                while((q+1!=b[i+1])&&(q<b[i+1])&&(p==a[i+1]))
                {
                    c++;
                    q++;
                }
            }

            c++;

          if(i==1)
            x=c;
          else if(i==2)
            y=c;
          else if(i==4)
            w=c;
          else if(i==5)
            z=c;

          c=0;
        }
        }
        if(((w==x)&&(z==y))||((z==x)&&(w==y)))
        {
            cout<<"YES";
        }
        else
            cout<<"NO";
        t--;
    }
    return 0;
}
