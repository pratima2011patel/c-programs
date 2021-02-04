#include<stdio.h>
#include<conio.h>

void main()
{
clrscr();
printf("Program for displaying Perimeter of triangle");
peri();

getch();
}
int peri()
{
int peri, b=2,h=2;

peri=((2*b)+(2*h));
printf("\nThe perimeter of triangle is :=%d",peri);
}