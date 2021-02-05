#include<stdio.h>
#include<conio.h>
#include<math.h>
int asq(int);
int at(int , int);
/*int fun(int, int); */
void main()
{
int a=2,as,l=3,b=4,atr;
clrscr();
/*cout<<a<<b<<endl; */
/*as=asq(a);
atr=at(l,b); */
asq(a);
at(l,b);
getch();
}
int asq(int x)
{

int s=(x*x);
printf("\nThe area of square is:%d",s);
}
int at(int x, int y)
{
int t=(x*y);
printf("\nThe area of triangle is %d",t);
}