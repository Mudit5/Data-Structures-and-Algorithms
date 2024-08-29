//PROGRAM TO ILLUSTRATE SINGLE INHERITANCE USING CONSTRUCTOR

#include<iostream.h>
#include<conio.h>
#include<string.h>
#include<stdio.h>
class person
{
	char adhar[16];
	char name[30];
	int age;
	public:
	person()
	{
		strcpy(adhar,"NA");
		strcpy(name,"NA");
		age=0;
		cout<<endl;
		cout<<"PERSON OBJECT CREATED USING DEFAULT CONSTRUCTOR";
	}
	person(char a[],char nm[],int n)
	{
		strcpy(adhar,a);
		strcpy(name,nm);
		age=n;
		cout<<endl;
		cout<<"PERSON OBJECT CREATED USING PARAMETERIZED CONSTRUCTOR";
	}
	person(person &pobj)
	{
		strcpy(adhar,pobj.adhar);
		strcpy(name,pobj.name);
		age=pobj.age;
		cout<<endl;
		cout<<"PERSON OBJECT CREATED USING COPY CONSTRUCTOR";
	}
	void showp()
	{
		cout<<"\n\n******** PERSON DETAILS ARE ::********";
		cout<<"\nAADHAR NO \t:: "<<adhar;
		cout<<"\nNAME \t\t:: "<<name;
		cout<<"\nAGE \t\t:: "<<age<<endl;
	}
};

class student :public person
{
	int rno;
	char clas[5];
	char sec;
	public:
	student()		 //default ctor
	{
		rno=0;
		strcpy(clas,"NA");
		sec='x';
		cout<<endl;
		cout<<"STUDENT OBJECT CREATED USING DEFAULT CONSTRUCTOR";
		cout<<endl;
	}
	student(char a[],char nm[],int n,int r,char c[],char s):person(a,nm,n)
	{
		rno=r;
		strcpy(clas,c);
		sec=s;
		cout<<endl;
		cout<<"STUDENT OBJECT CREATED USING PARAMETERIZED CONSTRUCTOR";
		cout<<endl;
	}
	student(student &s)//:person(s)
	{
		rno=s.rno;
		strcpy(clas,s.clas);
		sec=s.sec;
		cout<<endl;
		cout<<"STUDENT OBJECT CREATED USING COPY CONSTRUCTOR";
		cout<<endl;
	}
	void shows()
	{
		cout<<"\n\n******* STUDENT DETAILS ARE:: *******";
		cout<<"\nROLL NO \t:: "<<rno;
		cout<<"\nCLASS \t\t:: "<<clas;
		cout<<"\nSECTION \t:: "<<sec<<endl;
	}
};	//student class ends

void main()
{
	clrscr();
	student s1;
	student s2("123453456","Aman",15,1,"X",'a');
	student s3(s2);
	s3.showp();
	s3.shows();
	getch();
}
