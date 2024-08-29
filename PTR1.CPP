#include<iostream.h>
#include<conio.h>

void main()
{
clrscr();
int n=5;
cout<<n<<endl<<&n<<endl; // & is the address operator
int *ip; //declare a pointer
ip=&n; //assigning n integer var address to ip pointer
cout<<ip<<endl;     //content of ip which is the address of n
cout<<*ip<<endl;   //derefrence ip pointer to display value of n.here * is
		   //value at address operator
*ip=10;
cout<<endl<<n;
cout<<&ip;
getch();
}
