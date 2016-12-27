#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
int i,num,n;
long int result=1;
printf("\n enter the number: ");
scanf("%d",&num);
printf("\n till which power to calculate: ");
scanf("%d",&n);
for(i=1;i<=n;i++)
result=result*num;
printf("\n pow(%d,%d)=%ld",num,n,result);
return 0;
}
