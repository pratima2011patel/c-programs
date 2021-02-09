
#include<iostream.h>
#include<conio.h>
class stud
{
public: int sid;
	char sname[20],add[30];
public: void set()
	{
	cout<<"\nEnter studeent details like sid,name ,address";
	cin>>sid>>sname>>add;
	}
	void dis()
	{
	cout<<"\nThe student id is :-"<<sid;
	cout<<"\nThe name is :-"<<sname;
	cout<<"\nThe address of student is:-"<<add;
	}
};
class exam: public stud
{
public: char p1[30],p2[20];
public: void set()
	{ stud::set();
	 cout<<"\nEnter paper name";
	 cin>>p1>>p2;
	}
	void dis()
	{stud::dis();
	cout<<"\nPaper-1"<<p1<<"\nPaper -2"<<p2;
	}
};
class sport
{
public:int smark;
public: void sset()
	{
	cout<<"Enter sports marks";
	cin>>smark;
	}
	void sdis()
	{
	/*stud::dis();*/
	cout<<"\nSports subject marks are:-"<<smark;
	}
};
class result:public exam,public sport
{
public:
	int tmarks;
public: void set()
	{
	exam::set();
	sport::sset();
	cout<<"\nEnter total marks:-";
	cin>>tmarks;
	}
	void dis()
	{
	exam::dis();
	sport::sdis();
	cout<<"\nThe total marks of an student is :-"<<tmarks;
	}
};
void main()
{
  result r1;
  clrscr();
  r1.set();
  r1.dis();
  getch();
}