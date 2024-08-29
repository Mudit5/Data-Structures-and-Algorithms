/*PROGRAM TO ILLUSTRATE THE USE OF FUNCTION OVERLOADING*/
#include <iostream.h>
#include <conio.h>
#include <stdlib.h>

class func
{
	long principle;
	int Time;
	float rate;
	float total_amt;
	public :
	void deposit()
	{
		principle = 0;
		Time = 0;
		rate = 0;
		cout <<"\nPrinciple \t:: " <<principle;
		cout <<"\nTime \t\t:: " <<Time;
		cout <<"\nRate \t\t:: "<<rate;
	}

	void deposit(long p, int t, float r)
	{
		principle = p;
		Time = t;
		rate = r;
		cout <<"\nPrinciple \t:: " <<principle;
		cout <<"\nTime \t\t:: " <<Time;
		cout <<"\nRate \t\t:: "<<rate;
	}

	void deposit(long p, float r)
	{
		principle = p;
		Time = 2;
		rate = r;
		cout <<"\nPrinciple \t:: " <<principle;
		cout <<"\nTime \t\t:: " <<Time;
		cout <<"\nRate \t\t:: "<<rate;
	}

	void deposit(long p, int t)
	{
		principle = p;
		Time = t;
		rate = 0.08;
		cout <<"\nPrinciple \t:: " <<principle;
		cout <<"\nTime \t\t:: " <<Time;
		cout <<"\nRate \t\t:: "<<rate;
	}

	void cal_amt()
	{
		total_amt = principle + (principle*rate*Time)/100;
	}

	void display()
	{
		cout << endl;
		cout <<"\nPrinciple Amount \t:: "<<principle;
		cout <<"\nPeriod Of Investment \t:: "<<Time;
		cout <<"\nRate Of Investment \t:: " <<rate;
		cout <<"\nTotal Amount \t\t:: " <<total_amt;
		cout << endl;
	}
};

void main()
{
	clrscr();
	cout << endl <<"********** FIRST PASS **********";
	func F1;
	F1.deposit();
	F1.cal_amt();
	F1.display();

	cout << endl <<"********** SECOND PASS **********";
	func F2;
	F2.deposit(10000, 2, 8);
	F2.cal_amt();
	F2.display();

	cout << endl <<"********** THIRD PASS **********";
	func F3;
	F3.deposit(10000, 8);
	F3.cal_amt();
	F3.display();

	cout << endl <<"********** FOURTH PASS **********";
	func F4;
	F4.deposit(10000, 2);
	F4.cal_amt();
	F4.display();
	getch();
}
