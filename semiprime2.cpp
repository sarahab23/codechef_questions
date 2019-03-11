#include<iostream>
using namespace std;
int yo,c=0,d=0,k=0;
int checkSemiprime(int num)
{
    int cnt = 0;

    for (int i = 2; cnt < 2 && i * i < num; ++i)
        {
        	while (num % i == 0)
            num /= i;
            ++cnt;
         }
    if (num > 1)
        ++cnt;

    return cnt == 2;
}
void semiprime(int n)
{
 if(checkSemiprime(n))
 {
  if(checkSemiprime(yo))
    {
        cout<<"YES";
        k++;
       return;
    }
 }

}
int main()
{
	int i,T,N,x,y=6;
	cin>>T;
	while(T!=0)
	{
	   cin>>N;
	   if(N>=12)
	   {
	       if((N%2)==0)
	       {
                for(x=N-6;x>=N/2;x--)
                {
                    y=N-x;
                    yo=x;
                    semiprime(y);
                    if(k!='0')
                     break;
                }
                if(k=='0')
                {
                cout<<"NO";
                }
            }

            else
            {
                for(x=N-6;x>=(N-1)/2;x--)
                {
                    y=N-x;
                    yo=x;
                    semiprime(y);
                    if(k!='0')
                     break;
                }
                if(k=='0')
                {
                cout<<"NO";
                }

            }

        }
        else
        {
        cout<<"NO";
        }
    T--;
    }
}

