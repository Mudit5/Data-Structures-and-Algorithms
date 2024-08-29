// This program illustrates the use of
// Hierarchical inheritance

#include<iostream.h>
#include<conio.h>
#include<stdio.h>

class person
{
	protected:
	char name[30];
	long int aid;
	public:
	void getp()
	{
		cout << "ENTER THE NAME \t\t:: ";
		gets(name);
		cout << "ENTER THE AADHAR ID \t:: ";
		cin >> aid;
	}
};
class employee: public person
{
	protected:
	int empid;
	char desg[30];
	float sal;
	public :
	void gete()
	{
		cout << "ENTER THE EMPLOYEE ID \t:: ";
		cin >> empid;
		cout << "ENTER THE DESIGNATION \t:: ";
		gets(desg);
		cout << "ENTER THE SALARY \t:: ";
		cin >> sal;
	}
	void printe()
	{
		cout << "\nEMPLOYEE ID \t:: "<< empid;
		cout << "\nDESIGNATION \t:: "<< desg;
		cout << "\nSALARY \t\t:: "<< sal;
		cout << "\nNAME \t\t:: "<< name;
		cout << "\nAADHAR ID \t:: "<< aid;
	}
};
class student: public person
{
	int rno;
	int sclass;
	int marks;
	public:
	void getst()
	{
		cout << "ENTER THE ROLL NO \t:: ";
		cin >> rno;
		cout << "ENTER THE CLASS \t:: ";
		cin >> sclass;
		cout << "ENTER THE MARKS \t:: ";
		cin >> marks;
	}
	void prints()
	{
		cout << "\nNAME \t\t:: " << name;
		cout << "\nAADHAR ID \t:: "<< aid;
		cout << "\nROLL NO \t:: " << rno;
		cout << "\nCLASS \t\t:; " << sclass;
		cout << "\nMARKS \t\t:: " << marks;
	}
};
void main()
{
clrscr();
cout << "\n\n******* FOR EMPLOYEE CLASS ******\n"<< endl;
employee ob1;
ob1.getp();
ob1.gete();
ob1.printe();

cout << "\n\n****** FOR STUDENT CLASS ******\n"<< endl;
student ob2;
ob2.getp();
ob2.getst();
ob2.prints();
getch();
}


