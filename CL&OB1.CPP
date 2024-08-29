/*PROGRAM TO CALCULATE THE AREA OF GIVEN SQUARE USING CLASSES AND OBJECTS*/
#include <iostream.h>
#include <conio.h>

class box
{
	int boxnumber;
	float side;
	float area;
	void execarea()
	{
		area = side*side;
	}
	public:
	void getbox()
	{
		cout <<"Enter the Box Number \t:: ";
		cin >> boxnumber;
		cout <<"Enter the Side \t\t:: ";
		cin >> side;
		execarea();
		cout << endl;
	}
	void showbox()
	{
		cout <<"\nThe Box Number is \t:: " << boxnumber;
		cout <<"\nThe Side is \t\t:: " << side;
		cout <<"\nThe Area is \t\t:: " << area;
	}
};

void main()
{
	clrscr();
	box ob;
	ob.getbox();
	ob.showbox();
	getch();
}
