#include <iostream>
#include <string>
#include <vector>
#include <cstdio>
#include <sstream>
#include <limits>
#include <iterator>
using namespace std;

int main() {
    int T,N,K,m,c=0;
    cin>>T;
    while(T--)
    {
        cin>>N>>K;
        for(int i=0;i<N;i++)
        {
            cin>>m;
            if(m>1)
            c++;
        }
        if(c<=K)
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;
        c=0;
    }
	return 0;
}
