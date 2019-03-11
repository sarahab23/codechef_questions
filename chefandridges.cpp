#include<iostream>
using namespace std;
#include<math.h>
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        if((n%3)==0)
        {
            x=n/3;
            y=1-pow((3/8),x);
        }
        else if((n%3)==1)
        {
            x=n/3;
            y=pow((3/8),x)/2;
        }
        else if((n%3)==2)
        {
            x=n/3;
            y=pow((3/8),x)/4;
        }
    }
    return 0;
}
