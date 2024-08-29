//PROGRAM TO READ A TEXT FILE AND DISPLAY IT CHARACTER BY CHARACTER
#include<fstream.h>
#include<conio.h>

void main()
{
	clrscr();
	ifstream in("para.txt",ios::in);
	char c;
	while(in)
	{
		//fetch a character from the input stream into variable c
		in.get(c);
		if(in.eof())break;
		//display the fetched character on screen
		cout<<c<<' ';
	}
	in.close();
	getch();
}