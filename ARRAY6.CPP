//PROGRAM TO ILLUSTRATE BUBBLE SORTING IN ARRAYS
#include<iostream.h>
#include<conio.h>

void main()
{
	clrscr();
	int x[10];
	cout << "\nENTER THE ARRAY OF 10 NUMBERS .....\n";
	for (int i=0; i<10; i++)
	{
		cout << "ENTER ELEMENT "<< i+1 << " \t-> ";
		cin >> x[i];
	}
	int temp;
	int size = 10;
	for(i=0; i<size; i++)
	{
		for(int j=0; j<size-1; j++)
		{
			if(x[j] > x[j+1])
			{
				temp = x[j];
				x[j] = x[j+1];
				x[j+1] = temp;
			}
		}
	}
	cout << "\nSORTED ARRAY IS .......\n";
	for(i=0; i<size; i++)
		cout << x[i] << "   ";
	getch();
}