//PROGRAM TO ILLUSTRATE SELECTION SORT TO SORT AN ARRAY OF SIZE n
#include<iostream.h>
#include<conio.h>
#include<limits.h>

void SelSort(int arr[], int n)
{
	int i, j, min, pos, temp;
	for(i=0; i<n-1; i++)
	{
		pos = i;
		min = arr[i];
		for(j=i+1; j<n; j++)
		{
			if(arr[j] < min)
			{
				pos = j;
				min = arr[j];
			}
		}
		//SWAP i AND pos INDICES
		temp = arr[i];
		arr[i] = arr[pos];
		arr[pos] = temp;
		cout << "\nARRAY AFTER PASS " << i+1 << "...." << endl;
		for(int k=0; k<n; k++)
			cout << arr[k] << "   ";
	}
}

void main()
{
	clrscr();
	int i;
	int arr[5];
	cout << "********** ENTER THE ARRAY **********\n";
	for(i=0; i<5; i++)
	{
		cout << "ENTER ELEMENT " << i+1 << " :: ";
		cin >> arr[i];
	}
	SelSort(arr, 5);
	//DISPLAY THE SORTED DATA.
	cout << "\n\nSORTED ARRAY IS ..... \n";
	for(i=0; i<5; i++)
		cout << arr[i] << "   ";
	getch();
}
