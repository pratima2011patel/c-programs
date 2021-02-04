#include<iostream.h>
#include<conio.h>
class add
{
	public:
		int a,b;
	public:
		void set(int x, int y)
		{
		a=x;
		b=y;
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
a1.set(2,8);
a1.dis();

getch();
}
