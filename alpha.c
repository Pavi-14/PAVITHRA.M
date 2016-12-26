#include<stdio.h>
#include<conio.h>
#include<ctype.h>
main()
{
char ch;
printf("\n enter the character: ");
scanf("%c",&ch);
if(isalpha(ch)>0)
printf("\n %c is a alphabet",ch);
else
printf("\n %c is not a alphabet",ch);
getch();
}
