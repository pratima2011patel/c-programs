#include<conio.h>
#include<math.h>
#include<stdio.h>
int acone(int , int);
void main()
{
int r=2,h=2;
clrscr();
acone(r,h);
getch();

}
int acone(int r, int h)
{
float pi=3.14,c=1/3;
int a;
a=(c*pi*r*r*h);
printf("The area of Cone is :-%d",a);
}