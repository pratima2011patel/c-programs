#include<stdio.h>
#include<conio.h>
#include<math.h>

int pcir(int);
/*int fun(int, int); */
void main()
{
int r=4;
clrscr();
pcir(r);
getch();
}

int pcir(int x)
{
float pi=3.14;
int p=(2*pi*x);
printf("\nThe area of Perimeter is %d",p);
}