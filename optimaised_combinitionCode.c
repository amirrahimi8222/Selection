#include <stdio.h>

int main()
{
   long int n,k,muln=1,mulk=1;
   scanf("%ld %ld",&n,&k);
   int s=n-k;
if(k<n/2)
{for(;k>0;n--,k--)
   {muln=n*muln;
       mulk=k*mulk;}
   long int multiply=muln/mulk;
    printf("%ld",multiply);}
   else if(k>=n/2)
{for(;s>0;n--,s--)
    {muln=n*muln;
        mulk=s*mulk;}
  long int multiply=muln/mulk;
    printf("%ld",multiply);}
    return 0;
}

