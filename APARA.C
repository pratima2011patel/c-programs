#include<conio.h>
#include<math.h>
#include<stdio.h>
int apara(int ,int);
void main()
{
int h=4,b=4;
clrscr();
apara(b,h);
getch();

}
int apara(int b, int h)
{
int a=b*h;
printf("The Area of Parallelogram:-%d",a);
}