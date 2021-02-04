#include<stdio.h>
#include<conio.h>

void main()
{
clrscr();
printf("Program for displaying Area of square");
area();

getch();
}
int area()
{
int area,l=4,w=4;

area=(l*w);
printf("\nThe Area of square is :=%d",area);
}