//THIS PROGRAM ILLUSTRATES THE USE OF SINGLE INHERITANCE WITHOUT
//USING CONSTRUCTOR

#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<string.h>

class person
{
	protected:
	char aadhar[17];
	char name[20];
	public:
	void getp()
	{
		cout << "ENTER NAME \t:: ";
		gets(name);
		cout << "ENTER AADHAR ID :: ";
		cin >> aadhar;
	}
};
class student: public person
{
	protected:
	int rno;
	int marks;
	public:
	void getst()
	{
		cout <<"ENTER ROLL NO \t:: ";
		cin >> rno;
		cout <<"ENTER MARKS \t:: ";
		cin >> marks;
	}
	void putst()
	{
		cout << endl;
		cout << "\nNAME \t\t:: " << name;
		cout << "\nROLL NO \t:: "<<rno;
		cout << "\nMARKS \t\t:; " <<marks;
		cout << "\nAADHAR ID \t:: "<< aadhar;
	}
};
void main()
{
	clrscr();
	student ob;
	ob.getp();
	ob.getst();
	ob.putst();
	getch();
}


