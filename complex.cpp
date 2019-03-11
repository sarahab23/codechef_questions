#include<iostream>
using namespace std;
class ComplexNumber
{
    int x,y;
    public:
     ComplexNumber();
     ComplexNumber(const ComplexNumber&);
     void display_complex();
     ComplexNumber(int,int);
     ComplexNumber operator-(ComplexNumber&);
     void get_val();
};
void ComplexNumber::get_val()
{
    int c,d;
    cout<<"Enter real part:";
    cin>>c;
    x=c;
    cout<<endl<<"Enter imaginary part:";
    cin>>d;
    y=d;

}
ComplexNumber::ComplexNumber()
{
    x=0;
    y=0;
}
ComplexNumber::ComplexNumber(const ComplexNumber &C)
{
    x=C.x;
    y=C.y;
}
ComplexNumber::ComplexNumber(int a,int b)
{
    x=a;
    y=b;
}
ComplexNumber ComplexNumber::operator-(ComplexNumber &D)
{
    ComplexNumber t;
    t.x=x-D.x;
    t.y=y-D.y;
    return t;
}
void ComplexNumber::display_complex()
{
    cout<<"Complex object is:"<<x<<" + "<<y<<"i"<<endl;
}
int main()
{
    ComplexNumber C1(3,2),C2;
    C2.get_val();
    ComplexNumber C3 = C1 - C2;
    C1.display_complex();
    C2.display_complex();
    C3.display_complex();
    return 0;
}
