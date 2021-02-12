#include<conio.h>
#include<stdio.h>
void main()
{
int i,j;
char ch='E';
clrscr();
for(i=0;i<=4;i++)
{
for(j=1;j<=5;j++)
{
printf("%c",ch);
} ch--;
printf("\n");

}
getch();
}