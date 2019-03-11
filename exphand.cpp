#include<iostream>
using namespace std;
void xtext(int n)
{
    cout<<"Inside xtext:n="<<n<<endl;
    if(n)
      throw(n);
}
int main()
{
    cout<<"Start"<<endl;
    try
    {
        cout<<"Inside try scope!"<<endl;
        xtext(0);xtext(-5);xtext(9);
    }
    catch(int i)
    {
        cout<<"Expression caught..at"<<i<<endl;
    }
    cout<<"The end"<<endl;
    return 0;
}
