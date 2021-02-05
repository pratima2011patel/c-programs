#include<conio.h>
#include<math.h>
#include<stdio.h>
int ptrap(int ,int, int, int);
void main()
{
int l=2,b=2,h=2,w=2;
clrscr();
ptrap(l,b,h,w);
getch();

}
int ptrap(int l, int b, int h, int w)
{
int a=(l+b+h+w);
printf("The Perimeter of Trapezium:-%d",a);
}