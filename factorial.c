#include<stdio.h>
#include<conio.h>
#include<process.h>
int fact(int);
void main()
{
    int n,f;
    printf("\n enter the number: ");
    scanf("%d",&n);
    f=fact(n);
    printf("factorial=%d \n",f);
    getch();
}
int fact(int n)
{
    int f=1,i;
    if(n<0)
    {
        printf("\n the numbered entered is negative \n");
        exit(0);
        }
        else
        {
            for(i=1;i<=n;i++)
                f*=i;
        }
    return f;
}
