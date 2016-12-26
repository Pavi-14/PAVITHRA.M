#include<stdio.h>
#include<conio.h>
main()
{
int year;
printf("\n enter the year: ");
scanf("%d",&year);
if(year%4==0)
printf("\n leap year");
else
printf("\n non leap year");
getch();
return 0;
}
