#include <bits/stdc++.h>
using namespace std;
  int a[20];
  int desc(int numi,int num[])
  {

  for (int i=0,j=numi-1;i<numi;i++,j--)
  {
  a[j]=num[i];
  }
  }
int main()
{
    int arr[] = {1, 5, 8, 9, 6, 7, 3, 4, 2, 0},i=0;
    int n = sizeof(arr)/sizeof(arr[0]);

    sort(arr, arr+n);
    desc(n,arr);
    cout << "\nArray after sorting using "
         "default sort is : \n";
    for (i = 0; i < n; ++i)
        cout << arr[i] << " ";
    cout<<endl;
    for(i=0;i<n;i++)
        cout<<a[i]<<" ";
    return 0;
}
