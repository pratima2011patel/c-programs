#include<conio.h>
#include<math.h>
#include<stdio.h>
int atrap(int ,int, int);
void main()
{
int l=2,b=2,h=2;
clrscr();
atrap(l,b,h);
getch();

}
int atrap(int l, int b, int h)
{
float c=0.5,a;
a=(c*((l+b)*h));
printf("The Area of Trapezium:-%f",a);
}