#include<iostream>
#include<math.h>
using namespace std;
void Comb(int ar[], int rl, int st, int cl, bool check[], int len)
{
	if(cl > rl)
	return;

	else if (cl == rl)
	{
		for (int i = 0; i < len; i++)
		{
			if (check[i] == true)
			{
				cout<<ar[i]<<" ";
			}
		}
		cout<<"\n";
		return;
	}
	if (st == len)
	{
		return;
	}
	check[st] = true;
	Comb(ar, rl, st + 1, cl + 1, check, len);

	check[st] = false;
	Comb(ar, rl, st + 1, cl, check, len);
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,i;
        bool check[n];
        cin>>n;
        int a[n+1];
        for(i=1;i<=n;i++)
        {
            cin>>a[i];
            check[i] = false;
        }
        for(i = 1; i <= n; i++)
	    {
            Comb(a, i, 0, 0, check, n);
        }
    }
    return 0;
}
