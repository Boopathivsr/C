#include<stdio.h>
int main()
{
    int n,m;
    scanf("%d,%d",&m,&n);
    int i,flag=0;
    while(m<n)
    { flag=0;
  for(i=2;i<m/2;i++)
 {
    if(m%i==0)
 {
  flag=1;
 break;
    }
   }
  if(flag==0)
  {
   printf("%d",m);
   }
  m++;
 }  return 0;
}
