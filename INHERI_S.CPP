#include<iostream.h>
#include<conio.h>
class stud
{
public: int sid;
	char sname[20],add[30];
public: void set1()
	{
	cout<<"\nEnter studeent details like sid,name ,address";
	cin>>sid>>sname>>add;
	}
	void dis1()
	{
	cout<<"\nThe student id is :-"<<sid;
	cout<<"\nThe name is :-"<<sname;
	cout<<"\nThe address of student is:-"<<add;
	}
};
class exam: public virtual stud
{
public: int p1,p2;
public: void set2()
	{ /*stud::set();*/
	 cout<<"\nEnter paper marks";
	 cin>>p1>>p2;
	}
	void dis2()
	{
	/*stud::dis();*/
	cout<<"\nPaper-1"<<p1<<"\nPaper -2"<<p2;
	}
};
class sport: public virtual stud
{
public:int smark;
public: void set3()
	{
	cout<<"Enter sports marks";
	cin>>smark;
	}
	void dis3()
	{
	/*stud::dis();*/
	cout<<"\nSports subject marks are:-"<<smark;
	}
};
class result:public exam,public sport
{
public:
	int tmarks;
public: /*void set4()
	{
	/*exam::set();
	sport::sset();
	cout<<"\nEnter total marks:-";
	cin>>tmarks;
	} */

	void add()
	{
       /*	exam::dis();
	sport::sdis();*/
	tmarks=p1+p2+smark;
	cout<<"\nThe total marks of an student is :-"<<tmarks;
	}
};
void main()
{
  result r1;
  clrscr();
  r1.set1();
  r1.set2();
  r1.set3();

  r1.dis1();
  r1.dis2();
  r1.dis3();
  r1.add();
  getch();
}