#include<iostream>
using namespace std;
#define MAX 30
int i,j,n;
int *binar(int x)
{
int *y = new int[MAX];
int *c = new int[MAX];
i=0;
while(x!=1)
{
c[i]=x%2;
x=x/2;
i++;
}
c[i]=1;
n=i+1;
for(j= 0,i= n-1;i>=0;i--,j++)
{
 y[j] = c[i];
}
for(j=0;j<n;j++)
{
cout<<y[j]<<" ";
}
 cout<<endl;
 return y;
}
int main()
{
int T,A=0,B=0,C=0,*A1,*B1,*C1;
/*cin>>T;
while(T!=0)
{*/
cin>>A>>B>>C;
A1 = binar(A);
B1 = binar(B);
C1 = binar(C);
/*for(i=0;*(A1 + i)!='/0';i++)
{
cout<<*(A1 + i)<<"\t";
}
cout<<endl;
for(i=0;*(B1 + i)!='/0';i++)
{
cout<<*(B1 + i)<<"\t";
}
cout<<endl;
for(i=0;*(C1 + i)!='/0';i++)
{
cout<<*(C1 + 1)<<"\t";
}
cout<<endl;
/*T--;
}*/
return 0;
}
