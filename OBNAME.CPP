 #include<iostream.h>
 #include<conio.h>
 #include<string.h>
 class one
 {
  public: char a[20],b[20];
  public: void set()
	 {
	 cout<<"Enter 1 string";
	 cin>>a;
	 cout<<"Enter 2 string";
	 cin>>b;
	 }
	 void operator+ (one to1)
	 {
	  char t1[50],t2[50];
	  t1[50]=a[]+to1.a[];
	  t2[50]=b[]+to1.b[];
	  cout<<"\nString 1="<<t1<<"\nString 2="<<t2;
	 }
 };
 void main()
 {
 one o1,o2;
 clrscr();
 o1.set();
 o2.set();
 o1+o2;
 getch();
 }