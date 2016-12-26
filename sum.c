#include<stdio.h>
#include<conio.h>
main()
{
int i=1,n,sum=0;
printf("\n enter the number: ");
scanf("%d",&n);
while(i<=n)
{
sum=sum+i;
i++;
}
printf("\n sum=%d",sum);
getch();
}
