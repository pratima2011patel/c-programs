#include<stdio.h>
#include<conio.h>

void main()
{
clrscr();
printf("Program for displaying Circumference of Circle");
cum();

getch();
}
int cum()
{
float pi=3.14,ccum;
int r=4;

ccum=(2*pi*r);
printf("\nThe Circumference of circle is :=%f",ccum);
}