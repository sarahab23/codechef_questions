#include <stdio.h>
int N,S[1000000];
const unsigned int M = 1000000007;

main()
{
    int T,i,j,n,a,k;
    scanf("&d",&T);

   for(k=0;k<T;k++)
    {  printf("enter");
        scanf("%d",&N);
        for(i=0;i<N;i++)
            scanf("%d",&S[i]);
        n = sizeof(S)/sizeof(S[0]);
        for (i = 0; i < N; ++i)
        {
            for (j = i + 1; j < N; ++j)
            {
                if (S[i] < S[j])
                {
                    a = S[i];
                    S[i] = S[j];
                    S[j] = a;
                }
            }
        }
        i=1;

       while(i<N)
       {
              if(S[i]!=S[i+1])
                break;
             i++;

       }
        printf("%d \t",i%M);

    }
}
