#include<stdio.h>
#include<conio.h>
main()
{
int a,b,temp;
printf("\n enter the values of a and b: ");
scanf("%d %d",&a,&b);
temp=a;
a=b;
b=temp;
printf("\n the values after swapping:%d %d",a,b);
getch();
return 0;
}
