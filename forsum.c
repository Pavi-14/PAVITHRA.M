#include<stdio.h>
#include<conio.h>
main()
{
int i=1,n,sum=0;
printf("\n enter the numner: ");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
sum=sum+i;
}
printf("\n sum=%d",sum);
getch();
return 0;
}
