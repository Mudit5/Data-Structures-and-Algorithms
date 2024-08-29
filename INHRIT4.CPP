// This program illustrates the use of
// Multilevel inheritance

#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<string.h>
class person
{
	char pname[20];
	long int aadno;
	public:
	void input()
	{
		cout << "ENTER PERSON's NAME \t:: ";
		gets(pname);
		cout << "ENTER AADHAR NO \t:: ";
		cin >> aadno;
		cout << endl;
	}
	void output()
	{
		cout << "\n******* PERSON DATABASE ****** \n";
		cout << "\nPERSON's NAME \t:: " << pname;
		cout << "\nAADHAR NO \t:: " << aadno;
	}
	person()
	{
		strcpy(pname, "  ");
		aadno = 0;
	}
};

class student: public person
{
	char sname[20];
	int rno;
	public:
	void sinput()
	{
		cout <<"ENTER STUDENT NAME \t:: ";
		gets(sname);
		cout <<"ENTER ROLL NO \t\t:: ";
		cin >> rno;
	}
	void soutput()
	{
		cout <<"\nNAME \t\t:: "<< sname;
		cout << "\nROLL NO \t:: "<< rno;
	}
	student()
	{
		strcpy(sname,"  ");
		rno = 0;
	}
};
class school: public student
{
	char schname[50];
	int stclass;
	public :
	void schinput()
	{
		cout << "ENTER SCHOOL NAME \t:: ";
		gets(schname);
		cout << "ENTER CLASS \t\t:: ";
		cin >> stclass;
	}
	void schoutput()
	{
		cout << "\n\n****** SCHOOL DATABASE ****** \n";
		cout << "\nSCHOOL NAME \t:: " << schname;
		cout << "\nCLASS \t\t:: " << stclass;
	}
	school()
	{
		strcpy (schname, "  ");
		stclass = 12;
	}
};
void main()
{
	clrscr();
	school ob;
	ob.input();
	ob.schinput();
	ob.sinput();
	ob.output();
	ob.schoutput();
	ob.soutput();

	getch();
}


