#include<conio.h>
#include<math.h>
#include<stdio.h>
int psq(int);
void main()
{
int l=2;
clrscr();
psq(l);
getch();

}
int psq(int l)
{
int p;
p=(4*l*l*l*l);
printf("The Perimeter of Square:-%d",p);
}