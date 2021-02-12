#include<stdio.h>
#include<conio.h>
void main()
{
int i,j;
char ch='E';
clrscr();
for(i=0;i<=4;i++)
{
for(j=0;j<=4;j++)
{
printf("%c",ch);
ch--;
}
printf("\n");
ch='E';
}
getch();
}
