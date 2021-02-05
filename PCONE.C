#include<conio.h>
#include<math.h>
#include<stdio.h>
int pcone(int ,int);
void main()
{
int l=2,b=2;
clrscr();
pcone(l,b);
getch();

}
int pcone(int l, int b)
{
int p;
p=((l*l)+(b*b));
printf("The Perimeter of COne:-%d",p);
}