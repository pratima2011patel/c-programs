#include<iostream.h>
#include<conio.h>
class add
{
	public:
		int a,b;
	public:
		void set()
		{
		a=2;
		b=4;
		}
		void dis()
		{
		cout<<"\nValue of A is:-"<<a<<"\nValue of B is:-"<<b;
		}
};
void main()
{
clrscr();
add a1;
a1.set();
a1.dis();

getch();
}
