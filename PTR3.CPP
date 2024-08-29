#include<iostream.h>
#include<conio.h>
#include<stdio.h>
class student
{
int rno;
char name[20];
public:
void input()
{
cout<<"\n enter student details:";
cin>>rno;
gets(name);
}
void output()
{
cout<<"\n student details:";
cout<<rno<<endl;
puts(name);
}
};
student s;
student *sp;
void main()
{
clrscr();
s.input();
s.output();
sp=&s;  //sp points to s
cout<<endl<<"displaying student object using student pointer"<<endl;
//struct pointer obj accessing struct data members using arrow operator
sp->input();
sp->output();
getch();
}
