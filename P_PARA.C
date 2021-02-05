#include<conio.h>
#include<math.h>
#include<stdio.h>
int ppara(int ,int);
void main()
{
int a=4,b=4;
clrscr();
ppara(a,b);
getch();

}
int ppara(int b, int h)
{
int a=((2*b)+(2*h));
printf("The Perimeter of Parallelogram:-%d",a);
}