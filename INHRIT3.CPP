// This program illustrates the use of
// Multiple inheritance

#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<string.h>

class initial
{
	protected:
	char name[30];
	char aid[16];
	public:
	void geti()
	{
		cout << "ENTER THE NAME \t\t:: ";
		gets(name);
		cout << "ENTER THE AADHAR ID \t:: ";
		cin >> aid;
		cout << endl;
	}
};
class final
{
	protected:
	float sal;
	char desg[20];
	public:
	void getf()
	{
		cout << "ENTER THE SALARY \t:: ";
		cin >> sal;
		cout << "ENTER THE DESIGNATION \t:: ";
		gets(desg);
		cout << endl;
	}
};
class employee: public initial, public final
{
	protected:
	int eid;
	public:
	void gete()
	{
		cout << "ENTER THE EMPLOYEE ID \t:: ";
		cin >> eid;
	}
	void pute()
	{
		cout << "\n\n********* DETAILS ARE :: ********";
		cout << "\nNAME \t\t:: " << name;
		cout << "\nAADHAR ID \t:: " << aid;
		cout << "\nSALARY \t\t:: " << sal;
		cout << "\nDESIGNATION \t:: " << desg;
		cout << "\nEMPLOYEE ID \t:: " << eid;
	}
};
void main()
{
	clrscr();
	employee ob;
	ob.geti();
	ob.getf();
	ob.gete();
	ob.pute();
	getch();
}


