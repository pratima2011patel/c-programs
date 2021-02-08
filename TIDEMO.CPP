#include<iostream.h>
#include<conio.h>
class tdemo
{
	public: int h,m,s;
	public:
		void input()
		{
		cout<<"Enter the time in hh/mm/ss";
		cin>>h>>m>>s;

		}
		void add(tdemo t1, tdemo t2);
};
void tdemo::add(tdemo t1, tdemo t2)
{

int day,hh,mm,ss,emin,esec;
ss=(t1.s+t2.s)%60;
esec=(t1.s+t2.s)/60;
cout<<ss<<endl;
mm=(t1.m+t2.m+esec)%60;
emin=(t1.m+t2.m)/60;
cout<<emin<<endl;
hh=(t1.h+t2.h+emin)%24;
day=(t1.h+t2.h+emin)/24;
cout<<hh<<endl;
cout<<hh<<":"<<mm<<":"<<ss;
}
void main()
{
tdemo o1,o2,o3;
clrscr();
o1.input();
o2.input();
o3.add(o1,o2);
getch();
}