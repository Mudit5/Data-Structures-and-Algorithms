/*PROGRAM TO ILLUSTRATE DEFAULT, PARAMETERISED, COPY CONSTRUCTOR*/
#include <iostream.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>

class travel
{
	char t_code[5];
	int distance;
	float rate;
	public:
	travel()
	{
		strcpy(t_code, "NULL");
		distance = 0;
		rate = 0;
		cout <<"\n******** DEFAULT CONSTRUCTOR CALLED *********\n";
	}
	travel(char c[], int d, float r)
	{
		strcpy(t_code, c);
		distance = d;
		rate = r;
		cout <<"\n***** PARAMETERIZED CONSTRUCTOR CALLED ******\n";
	}
	travel(travel &T)
	{
		strcpy(t_code, T.t_code);
		distance = T.distance;
		rate = T.rate;
		cout <<"\n********** COPY CONSTRUCTOR CALLED **********\n";
	}
};

void main()
{
	clrscr();
	travel t1;
	travel t2("A", 200, 0.8);
	travel t3(t2);
	getch();
}
