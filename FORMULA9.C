#include<stdio.h>
#include<conio.h>

void main()
{
clrscr();
printf("Program for displaying Area of Cone");
area();

getch();
}
int area()
{
int a=2,b=2,area;


area=(a*a)+(b*b);
printf("\nThe Area of cone is :=%d",area);
}