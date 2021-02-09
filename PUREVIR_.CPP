#include<iostream.h>
#include<conio.h>
class one
{
virtual void dis()=0;
};

class two: public one
{
public: void dis()
	{
	cout<<"derived class called";
	}
};
void main()
{

clrscr();
two t1;
t1.dis();
getch();
}