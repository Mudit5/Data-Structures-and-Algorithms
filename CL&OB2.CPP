/*PROGRAM TO CALCULATE THE VOLUME OF GIVEN SHAPE USING CLASSES AND OBJECTS*/
#include <iostream.h>
#include <conio.h>

class container
{
	float radius;
	float height;
	int type;
	float volume;
	void calcvolume()
	{
		if(type == 1)
		{
			volume = 3.14*radius*radius*height;
		}
		else if(type == 2)
		{
			volume = 3.14*radius*radius*height/3;
		}
	}
	public:
	void getvalues()
	{
		cout <<"Enter the Radius :: ";
		cin >> radius;
		cout <<"Enter the Height :: ";
		cin >> height;
		cout << endl << "TYPE 1 :: CYLINDER";
		cout << endl << "TYPE 2 :: CONE "<< endl;
		cout <<"Enter the Type \t:: ";
		cin >> type;
		calcvolume();
	}

	void showall()
	{
		cout <<"\nThe Radius is \t:: " << radius;
		cout <<"\nThe Height is \t:: " << height;
		cout <<"\nThe Type is \t:: " << type;
		if(type == 1)
			cout << " (CYLINDER) ";
		else if (type == 2)
			cout << " (CONE) ";
		cout <<"\nThe Volume is \t:: " << volume;
	}
};

void main()
{
	clrscr();
	container ob;
	ob.getvalues();
	ob.showall();
	getch();
}
