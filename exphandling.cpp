#include<iostream>
using namespace std;
class Vector
{
    double *p;int siz;
    public:
        class Range{};
        Vector(int n):siz(n)
        {
            p=new double[siz];
        }
        double& operator[](int i)
        {
            if((i>siz)||(i<0))
                throw Range();
            return p[i];
        }
        ~Vector(){delete[] p;}

};
int main()
{
    Vector v(5);
    try
    {
    v[2]=10.9;
    cout<<"Success"<<endl;
    cout<<"Trying to access V[9]"<<endl;
    v[9]=0.01;
    cout<<"Success"<<endl;
    int i=5;
    i=i*i;
    double X=v[i];
    }
    catch(Vector::Range)
    {
        cout<<"Throw block executed!!";
    }
    return 0;
}
