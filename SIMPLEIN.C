#include<stdio.h>
#include<conio.h>
#include<math.h>

int simpl(int, int);
/*int fun(int, int); */
void main()
{
int r;
clrscr();
printf("Enter the rate of interest");
scanf("%d",&r);
simpl(r,5);
getch();
}

int simpl(int x, int y)
{
int p=1,i=5;
int s=(x*i*y*p);
printf("\nThe Simple interest is %d",s);
}