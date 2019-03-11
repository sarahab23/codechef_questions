#include<iostream>
using namespace std;
#include<cstdio>
#include<string.h>
char ch[20],str[2099];
int n,l;
int check(char * stri,char * chi);
int main()
{
int T,N,c=-1,i,j=0,m;
char d=NULL,e=NULL;
double t=0;
n=0;
cin>>T;
while(T!=0)
{
cin>>N;
  while(N!=0)
  {
  cin.getline(ch,20);
  n=strlen(ch);
  l=strlen(str);
  m=check(str,ch);
    if(l!=0)
  {
  str[l]=' ';
  }
  strcat(str,ch);
  for(i=0;i<n;i++)
  {
    if((ch[i]!='d')&&(ch[i]!='f')&&(ch[i]!='j')&&(ch[i]!='k'))
    {
        c=1;
        exit(1);
    }
  }
  if(m==0)
{
  for(i=0;i<n;i++)
  {
    if((ch[i]=='d')||(ch[i]=='f'))
    {
        d='l';
    }
    else
    {
        d='r';
    }
    if(e==d)
    {
    t = t + 0.4;
    }
    else
    {
        t = t + 0.2;
    }
    e=d;
}
}
    if(m==1)
{
     for(i=0;i<n;i++)
  {
    if((ch[i]=='d')||(ch[i]=='f'))
    {
        d='l';
    }
    else
    {
        d='r';
    }
    if(e==d)
    {
    t = t + 0.2;
    }
    else
    {
        t = t + 0.1;
    }
    e=d;
    }
  }
  N--;
  }
  cout<<t;
T--;
}
return 0;
}
int check(char * stri, char * chi)
{
    int i,j,found;

    for(i=0;i<=l-n;i++)
    {
        found = 1;
        for(j=0;j<n;j++)
        {
            if(stri[i + j] != chi[j])
            {
                found = 0;
                break;
            }
        }
        if((j==n)&&(found==1))
        {
        break;
        }
        }

    return found;
}
