//PROGRAM TO READ A TEXT FILE 'STORY.TXT' AND
//COPY ALL THE LOWERCASE LETTERS TO 'LOWER.TXT' AND ALL THE
//UPPERCASE LETTERS TO 'UPPER.TXT'
#include <fstream.h>
#include <conio.h>
#include <stdio.h>
#include <ctype.h>

void char_up_low()
{
	ifstream in("story.txt",ios::in);
	ofstream out1("lower.txt",ios::out);
	ofstream out2("upper.txt",ios::out);
	char c;
	while(in)
	{
		if(in.eof())
			break;
		in.get(c);
		if(islower(c))
			out1<<c<<' ';
		else if(isupper(c))
			out2<<c<<' ';
	}
	cout<<"\nDATA WRITTEN TO FILES";
}

void up_low()
{
	fstream in1("lower.txt", ios::in);
	fstream in2("upper.txt", ios::in);
	char ch1[27], ch2[27];
	cout <<"\n\nTHE UPPER CASE LETTERS ARE ..."<< endl;
	while (in2)
	{
		in2>>ch2;
		if(in2.eof())
			break;

		cout<<ch2<<' ';
	}
	cout <<"\n\nTHE LOWERCASE LETTERS ARE ..."<< endl;
	while (in1)
	{
		in1>>ch1;
		if(in1.eof())
			break;

		cout<<ch1<<' ';
	}
}

void main()
{
	clrscr();
	char_up_low();
	up_low();
	getch();
}
