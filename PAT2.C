#include<conio.h>
#include<stdio.h>
void main()
{
char ch='A';
int i,j;
clrscr();
for(i=1;i<=4;i++)
{
for(j=1;j<=i;j++)
{
printf("%c",ch);
ch++;
}
printf("\n");
ch='A';
}
getch();
}