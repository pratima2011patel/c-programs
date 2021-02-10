#include<conio.h>
#include<iostream.h>
#include<string.h>
class one
{
public: char s1[30];
	void set()
	{
	cout<<"\nEnter string";
	cin.getline(s1,30);
	}
	void dis()
	{
	cout<<"Input string is " <<s1;
	}
	one operator+(one ts1)
	{
	one to1;
	strcat(s1,ts1.s1);
	strcpy(to1.s1,s1);
	return to1;
	}
};

void main()
{

one o1,o2,o3;
o1.set();
o2.set();
o3=o1+o2;
o3.dis();
getch();
}