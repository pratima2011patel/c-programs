#include<iostream.h>
#include<conio.h>
#include<string.h>
class one
{
 public: char *name;
	int l;
	one()
	{
	l=0;
	name=new char[l];
	}
	one(char n[])
	{
	 l=strlen(n);
	 name= new char[l+1];
	 strcpy(name,n);
	 }

	 void dis()
	 {
	 cout<<name<<"\n"<<l;
	 }
	~one()
	{
	cout<<"destructor called";
	}
};
void main()
{
one o1("pratima patel"),o2,o3;
clrscr();
o1.dis();
getch();
}
