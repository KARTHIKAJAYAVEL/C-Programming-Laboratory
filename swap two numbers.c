#include<stdio.h>
int main ()
{
   int j,k,l;
   scanf("%d%d",&j,&k);
   l=j;
   j=k;
   k=l;
   printf("j=%d,k=%d",j,k);
   return 0 ;
}
