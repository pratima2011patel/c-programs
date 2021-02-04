#include<iostream.h>
#include<conio.h>
class add
{
	public:
		int a,b;
	public:
		void set()
		{
		cout<<"Enter the value for A and B";
		cin>>a>>b;

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
