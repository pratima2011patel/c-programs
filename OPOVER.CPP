#include<iostream.h>
#include<conio.h>
class opera
{
	public:
		int a;
	public:
		opera()
		{a=2;
		}
		void operator- ()
		{
	       a=-a;
		}
		void dis()
		{
		cout<<"value of i ="<<a;
		}

};
void main()
{
opera a1;
clrscr();
-a1;
a1.dis();
getch();
}