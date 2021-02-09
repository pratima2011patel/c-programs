#include<iostream.h>
#include<conio.h>
class dist
{
public: int feet,inches;
public: dist()
	{
	feet=2;
	inches=4;
	}
	void disp()
	{
	cout<<"\nfeet: "<<feet<<"\nInches: "<<inches;
	}
	void operator- ()
	{
	feet=-feet;
	inches= -inches;
	}
};
void main()
{
dist d1;
clrscr();
d1.disp();
-d1;
d1.disp();
getch();
}