//PROGRAM TO ILLUSTRATE BINARY SEARCHING IN ARRAYS
#include<iostream.h>
#include<conio.h>

void main()
{
	clrscr();
	int x[10];
	int size = 10;
	cout << "\nENTER THE ARRAY IN ASCENDING ORDER.....\n";
	for (int i=0; i<size; i++)
	{
		cout << "ENTER ELEMENT "<< i+1 << " \t-> ";
		cin >> x[i];
	}
	int k;
	cout << "\nENTER THE VALUE TO BE SEARCHED FOR :: ";
	cin >> k;
	int lb = 0;
	int ub = 9;
	int mid = 0;
	int found = 0;
	int pos = 0;
	mid = (lb+ub)/2;
	while(lb<=ub)
	{

		if(x[mid] < k)
			lb = mid+1;
		else if(x[mid] == k)
		{
			found = 1;
			pos = mid;
			break;
		}
		else
			ub = mid-1;
		mid = (lb+ub)/2;
	}
	if(found == 0)
		cout<<"\nTHE ELEMENT WAS NOT FOUND IN THE ARRAY.\n";
	else if(found == 1)
	{
		cout<<"\nTHE ELEMENT WAS FOUND IN THE ARRAY AT POSITION :: ";
		cout<<pos+1;
	}
	getch();
}