#include<conio.h>
#include<stdio.h>
void main()
{
int p,a=2,b=4,c=4;
clrscr();
p=as(a,b,c);
printf("The Perimeter of Triangle is:%d",p);
getch();
}
int as(int x, int y, int z)
{
int t=(x+y+z);
return(t);
}