#include<conio.h>
#include<math.h>
#include<stdio.h>
int ptri(int ,int, int);
void main()
{
int a=2,b=2,c=2;
clrscr();
ptri(a,b,c);
getch();

}
int ptri(int a, int b, int c)
{
int p=(a+b+c);
printf("The Perimeter of triangle:-%d",p);
}