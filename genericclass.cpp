#include<iostream>
using namespace std;
template <class t>
class Vector
{
    t *v;int siz;
    public:
        Vector(int n)
        {
            siz=n;
            v=new t[siz];
        }
        t& elem(int i){return v[i];}
        void show()
        {
           for(int i=0;i<siz;i++)
             cout<<v[i]<<endl;
        }
        t& operator[](int i)
        {
            return v[i];
        }

};

int main()
{
    Vector<int> VI(5);
    for(int i=0;i<5;i++)
        VI.elem(i)=i;
    VI.show();
    Vector<double> VD(10);
    for(int i=0;i<9;i++)
        VD.elem(i)=i*0.1;
    VD.show();
    return 0;
}
