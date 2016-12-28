#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
char a[100],b[100];
printf("\n enter the string to check if it a palindrome: ");
gets(a);
strcpy(b,a);
strrev(b);
if(strcmp(a,b)==0)
printf("\n entered string is a palindrome.");
else
printf("\n entered string is not a palindrome.");
return 0;
}
