#include<conio.h>
#include<math.h>
#include<stdio.h>
int prect(int ,int);
void main()
{
int w=4,l=4;
clrscr();
prect(w,l);
getch();

}
int prect(int w, int l)
{
int a=((2*w)+(2*l));
printf("The Perimeter of Rectangle:-%d",a);
}