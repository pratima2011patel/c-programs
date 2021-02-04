#include<stdio.h>
#include<conio.h>

void main()
{
clrscr();
printf("Program for displaying Perimeter of Trapezium");
peri();

getch();
}
int peri()
{
int a=4,b=5,c=6,d=8,peri;

peri=a+b+c+d;
printf("\nThe Peri of Trapezium is :=%d",peri);
}