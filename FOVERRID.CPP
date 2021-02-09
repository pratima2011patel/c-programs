#include<iostream.h>
#include<conio.h>
class ball
{
public:
	void dis()
	{
	cout<<"i m ball";
	}
};
class fruit: public ball
{
public:
	void dis()
	{
	ball::dis();
	cout<<"\ni am fruit";
	}
};
void main()
{
fruit f1;
clrscr();
f1.dis();
getch();
}