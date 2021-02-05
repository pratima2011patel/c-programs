#include<stdio.h>
#include<conio.h>
#include<math.h>

int pt(int , int);
/*int fun(int, int); */
void main()
{
int l=3,b=4,pt;
clrscr();
/*cout<<a<<b<<endl; */
/*as=asq(a);
atr=at(l,b); */
pt(3,4);
getch();
}

int pt(int x, int y)
{
int t=(x*y);
printf("\nThe area of triangle is %d",t);
}