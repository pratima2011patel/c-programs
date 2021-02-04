#include<iostream.h>
#include<conio.h>
class add
{
	public:
		int a,b;
	public:
		void dis()
		{
		cout<<"\nValue of A is:-"<<a<<"\nValue of B is:-"<<b;
		}
};
void main()
{
clrscr();
add a1;
a1.a=12;
a1.b=14;
a1.dis();
getch();
}
