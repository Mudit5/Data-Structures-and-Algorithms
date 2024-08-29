//PROGRAM TO ILLUSTRATE INSERTION SORT TO SORT AN ARRAY OF SIZE n
#include<iostream.h>
#include<conio.h>
#include<limits.h>

void InsSort(int arr[], int n)
{
	arr[0] = INT_MIN;
	int i, j, min, temp;
	for(i=1; i<=n; i++)
	{
		temp = arr[i];
		j = i-1;
		while(temp<arr[j])
		{
			arr[j+1] = arr[j];
			j--;
		}
		//INSERT THE ELEMENT AT ITS CORRECT POSITION
		arr[j+1] = temp;
		cout << "\nARRAY AFTER PASS " << i << "...." << endl;
		for(int k=1; k<=n; k++)
			cout << arr[k] << "   ";
	}
}

void main()
{
	clrscr();
	int i;
	int arr[5];
	cout << "********** ENTER THE ARRAY **********\n";
	for(i=1; i<=5; i++)
	{
		cout << "ENTER ELEMENT " << i << " :: ";
		cin >> arr[i];
	}
	InsSort(arr, 5);
	//DISPLAY THE SORTED DATA.
	cout << "\n\nSORTED ARRAY IS ..... \n";
	for(i=1; i<=5; i++)
		cout << arr[i] << "   ";
	getch();
}
