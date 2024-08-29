//PROGRAM TO READ A TEXT FILE 'STORY.TXT' AND
//DISPLAY THE COUNT OF CHARACTER, WORD AND LINE USING SEPERATE FUNCTION
#include <fstream.h>
#include <conio.h>
#include <process.h>

void char_count()
{
	cout << "\n*************** CHARACTER COUNT *************\n";
	fstream inout("story.txt", ios::in | ios::out);
	char c;
	int count=0;
	while(inout)
	{
		if(inout.eof())
			break;
		inout.get(c);
		count++;
	}
	inout.close();
	cout << "NUMBER OF CHARACTERS IN TEXT FILE \t:: "<<count;
	cout << endl;
}

void word_count()
{
	cout << "\n*************** WORD COUNT ***************\n";
	fstream inout("story.txt", ios::in | ios::out);
	char c[25];
	int count=0;
	while(inout)
	{
		if(inout.eof())
			break;
		inout >> c;
		count++;
	}
	cout << "NUMBER OF WORDS IN TEXT FILE \t\t:: "<<count;
	cout << endl;
	inout.close();
}

void line_count()
{
	cout << "\n*************** LINE COUNT ***************\n";
	fstream inout("story.txt", ios::in | ios::out);
	char c[150];
	int count=0;
	while(inout)
	{
		if(inout.eof())
			break;
		inout.getline(c,150);
		count++;
	}
	cout<<"NUMBER OF LINES IN TEXT FILE \t\t:: "<<count;
	cout << endl;
	inout.close();
}
void tfile()
{
	fstream inout("story.txt", ios::in | ios::out);
	char c;
	if(!inout)
	{
		cout << "\nFILE CANNOT BE OPENED.";
		exit(1);
	}
	cout << "\n************** TEXT FILE IS **************\n";
	while(inout)
	{
		if(inout.eof())break;
		inout.get(c);
		cout << c;
	}
	cout << endl << endl;
	inout.close();
}

void main()
{
	clrscr();
	tfile();
	char_count();
	word_count();
	line_count();
	getch();
}
