#include<iostream.h>
#include<conio.h>
#include<stdio.h>
struct student
{
int rno;
char name[20];
};

student s;
student *sp;

void main()
{
clrscr();
cout<<"\n enter student details:";
cin>>s.rno; //struct obj accessing struct data members using dot operator
gets(s.name);
cout<<"\n student details:";
cout<<endl<<s.rno<<endl;
puts(s.name);
sp=&s;  //sp points to s
cout<<endl<<"displaying student object using student pointer"<<endl;
//struct pointer obj accessing struct data members using arrow operator
cout<<sp->rno<<endl<<sp->name<<endl;


getch();
}
