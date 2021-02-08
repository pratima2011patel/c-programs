#include<conio.h>
#include<stdio.h>
void main()
{
int a,b=2,h=4;
clrscr();
a=at(b,h);
printf("The area of Rectangle is:%d",a);
getch();
}
int at(int x, int y)
{
int t=(x*y);
return(t);
}