

#include<conio.h>
#include<stdio.h>
void main()
{
char c1=65;
int i,j,c,r;
clrscr();
	for(r=1;r<=3;r++)
	{
	  for(c=1;c<=4;c++)
	  {  if(((r==2)&&(c==2))||((r==2)&&(c==3)))
	     {
	     printf(" ");
	     }
	  else {printf("P");}
	  }
	  printf("\n");
}
for(i=1;i<=3;i++)
{
for(j=1;j<=i;j++)
{
printf("P");
}printf("\n");
}
getch();
}