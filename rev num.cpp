#include<iostream>
using namespace std;
int main()
{
int reverse=0,number;
cout<<"\n enter the number to reverse: ";
cin>>number;
while(number!=0)
{
reverse=reverse*10;
reverse=reverse+number%10;
number=number/10;
}
cout<<"reversed number is: "<<reverse;
return 0;
}
