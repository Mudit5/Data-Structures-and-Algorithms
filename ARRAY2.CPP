//PROGRAM TO MERGE TWO INTEGER ARRAYS GIVEN IN ASCENDING ORDER
//IN THIRD INTEGER ARRAY IN ASCENDING ORDER
#include<iostream.h>
#include<conio.h>
#include<limits.h>

void mergeAAA(int A[], int m, int B[], int n, int C[])
{
	int a, b,c;
	for(a=0, b=0, c=0; a<m && b<n; )
	{
		if(A[a] <= B[b])
			C[c++] = A[a++];
		else
			C[c++] = B[b++];
	}
	if(a<m)
	{
		while(a<m)
			C[c++] = A[a++];
	}
	else if(b<n)
	{
		while(b<n)
			C[c++] = B[b++];
	}
}

void main()
{
	clrscr();
	int i;
	int A[5], B[7], C[12];
	cout << "ENTER VALUES IN FIRST ARRAY IN ASCENDING ORDER.\n";
	for(i=0; i<5; i++)
	{
		cout << "ENTER ELEMENT " << i+1 <<" :: ";
		cin >> A[i];
	}
	cout << "\nENTER VALUES IN SECOND ARRAY IN ASCENDING ORDER.\n";
	for(i=0; i<7; i++)
	{
		cout << "ENTER ELEMENT " << i+1 <<" :: ";
		cin >> B[i];
	}
	mergeAAA(A, 5, B, 7, C);
	//DISPLAY ALL THREE ARRAYS.
	cout << "\n\n************ FIRST ARRAY ***********\n";
	for(i=0; i<5; i++)
		cout << A[i] << "   ";
	cout << "\n\n************ SECOND ARRAY **********\n";
	for(i=0; i<7; i++)
		cout << B[i] << "   ";
	cout << "\n\n************ MERGED ARRAY **********\n";
	for(i=0; i<12; i++)
		cout << C[i] << "   ";

	getch();
}
