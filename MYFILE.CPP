#include<fstream.h>
#include<conio.h>
int main()
{
clrscr();
char s1[2000];
fstream f1("file.txt",ios::in);
fstream f2("file2.txt",ios::app);
while(!f1.eof())
{
f1.getline(s1,2000);
cout<<s1<<endl;
f2<<s1;
}

f1.close();
 f2.close(																);
 return 0;


}
