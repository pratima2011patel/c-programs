#include<conio.h>
#include<stdio.h>
void main()
{
int i,j,n=5;
clrscr();
for(i=0;i<=4;i++)
{
for(j=1;j<=5;j++)
{
printf("%d",n);
n--;
}
printf("\n");
n=5;
}
getch();
}