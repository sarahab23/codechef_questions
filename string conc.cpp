#include <iostream>
using namespace std;
#include<string.h>
int main()
{
    string result;
    char s1[10],s2[10];
    cout << "Enter string s1: ";
    cin.getline (s1,10);

    cout << "Enter string s2: ";
    cin.getline (s2,10);

    strcat(s1,s2);
    strcat(result,s1);

    cout << "Resultant String = "<< result;

    return 0;
}
