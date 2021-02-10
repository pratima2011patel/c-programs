#include<stdio.h>
#include<conio.h>
void main()
{
int s=0,n=0, q1,q2,q3,q4,q5;
char un[30],pw[30];
clrscr();
printf("\t\t********************Welcome to Online Exam*****************\t\t");
printf("\n*****Enter your Login Details*****");
printf("\nEnter User name:=");
scanf("%s",&un);
printf("\nEnter Password:=");
scanf("%s",&pw);
clrscr();
printf("Q-1) 3+4 =? \nA) 7\nB) 9 \nC)10 \nAns:=");
scanf("%d",&q1);
clrscr();
printf("Q-2) 3+1 =? \nA) 7\nB) 4 \nC)10 \nAns:=");
scanf("%d",&q2);
clrscr();
printf("Q-3) 2+1 =? \nA) 7\nB) 4 \nC)3 \nAns:=");
scanf("%d",&q3);
clrscr();
printf("Q-4) 3-1 =? \nA) 7\nB) 2 \nC)10 \nAns:=");
scanf("%d",&q4);
clrscr();
printf("Q-5) 2*2 =? \nA) 7\nB) 4 \nC)10 \nAns:=");
scanf("%d",&q5);
clrscr();



if(q1==7){s++;n++;}
if(q2==4){s++;n++;}
if(q3==3){s++;n++;}
if(q4==2){s++;n++;}
if(q5==4){s++;n++;}
printf("\nscore:=%d",s);
printf("\ncorrect:=%d",n);
if(s>=5)
{printf("\nCongratulation!!!!You have socred highest marks");}
if((s<=3)&&(s>=2))
{printf("\nGood!!! You have scored 50% marks ..."); }
if((s<=2)&&(s>=1))
{printf("\nGood Try...");}
if(s==0)
{printf("\nSorry!!!! U are failed Better luck next time");}
getch();
}