#include<stdio.h>
#include<conio.h>
#include<math.h>

int at(int , int);
/*int fun(int, int); */
void main()
{
int a=2,as,l=3,b=4,atr;
clrscr();
/*cout<<a<<b<<endl; */
/*as=asq(a);
atr=at(l,b); */
at(l,b);
getch();
}
int at(int x, int y)
{
int t=(x*y);
printf("\nThe area of triangle is %d",t);
}