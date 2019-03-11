#include<iostream>
#include<math.h>
using namespace std;
int N,S[1000000];
const unsigned int M = 1000000007;
void quickSortInDescendingOrder (int numbers[], int low, int high)
{
    int i=low;
    int j=high;
    int temp;
    int middle=numbers[(low+high)/2];
    while (i<j)
    {
        while (numbers[i]>middle)
        {
            i++;
        }
        while (numbers[j]<middle)
        {
            j--;
        }
        if (j>=i)
        {
        temp=numbers[i];numbers[i]=numbers[j];numbers[j]=temp;i++;j--;
        }
    }
    if (low<j)
    {
        quickSortInDescendingOrder(numbers, low, j);
    }
    if (i<high)
    {
        quickSortInDescendingOrder(numbers, i, high);
    }
}

int main()
{
    int T,i,j,n,k,m,p;
    cin>>T;
    do
    {
        k=0;
        cin>>N;
        for(i=0;i<N;i++)
            cin>>S[i];
        n = sizeof(S)/sizeof(S[0]);
        quickSortInDescendingOrder(S,0, N-1);

        m=S[0];

       for(i=0;i<N-2;i+=2)
       {
          for(j=i+1;j<N;j++)
          {
              k++;
              if(S[j]!=S[j+1])
                break;
          }

       }

        cout<<k%M<<endl;
        T--;
    }while(T>0);
    return 0;
}
