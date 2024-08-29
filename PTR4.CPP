#include<iostream.h>
#include<conio.h>

void main()
{
clrscr();
int n[5]={5,6,7,8,9};
int *ip=n; //int *ip=&n[0];
//cout<<n<<endl<<ip<<endl<<&n[0];
cout<<endl<<*ip;
ip++;
cout<<endl<<*ip;
ip++;
cout<<endl<<*ip;
ip++;
cout<<endl<<*ip;
ip--;
cout<<endl<<*ip<<endl;
cout<<endl<<"using a loop:\n";
for(int *np=n;np<=&n[4];np++)
	cout<<*np<<" is stored at memory location:"<<np<<endl;
getch();
}
