#include <iostream.h>
#include<conio.h>

//skeleton code to illustrate the use of static data member and static member function in a class.

class Demo
{
	private:
		//static data member declaration inside class
		static int X;
		//Non static data member 
		int y;

	public:
	//Only static data member can be accessed inside static member function
	static void  Print()
	{
		cout <<"Value of static X inside static func Print()"<< endl;
		cout <<"Value of static X using class name: " << Demo::X << endl;
		cout <<"Value of X directly: " << X << endl;

	}
	//non-static data member as well as static data member can be accessed inside non-static member function
	void show()
	 {
		cout <<"Value of static X inside non-static func show()"<< endl;
		cout <<"Value of static X using class name: " << Demo::X << endl;
		cout <<"Value of X directly: " << X << endl;
		cout <<"Value of non static y directly: " << y << endl;

	}
};

//static data member definition outside class
int Demo::X =10;

void main()
{       clrscr();
	Demo OB;//class object
	OB.Print();
	Demo::Print();
	OB.show();
	getch();
}