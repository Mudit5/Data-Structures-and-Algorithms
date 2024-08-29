//PROGRAM TO ILLUSTRATE 'THIS' POINTER
#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<string.h>

class salesman
{
	char name[30];
	float total_sales;
	public:

	salesman(char* s, float f)
	{
		strcpy(name, " ");
		strcpy(name, s);
		total_sales = f;
	}

	void prnobject()
	{
		cout << this->name;
		cout << " has invovked  prnobject(). \n";
	}
};

void main()
{
	clrscr();
	salesman raman("raman", 2.5);
	salesman sita("sita", 3.5);
	salesman vedant("vedant", 4.5);
	raman.prnobject();
	sita.prnobject();
	vedant.prnobject();
	getch();
}