//PROGRAM TO READ A TEST FILE 'STORY.TXT' AND
//DISPLAY THE COUNT OF LOWERCASE LETTERS, UPPERCASE LETTERS, SPACES,
//DIGITS AND SPECIAL SYMBOLS
#include <fstream.h>
#include <conio.h>
#include <ctype.h>

void count()
{
	ifstream in("story.txt",ios::in);
	char c;
	int cl=0,cu=0,cd=0,cs=0,css=0;
	while(in)
	{
		if(in.eof())
			break;
		in.get(c);
		if(islower(c))
			cl++;
		else if(isupper(c))
			cu++;
		else if(isdigit(c))
			cd++;
		else if(c==' ')
			cs++;
		else
			css++;
	}
	cout<<"\nTOTAL NUMBER OF LOWERCASE LETTERS \t:: "<<cl ;
	cout<<"\nTOTAL NUMBER OF UPPERCASE LETTERS \t:: "<<cu ;
	cout<<"\nTOTAL NUMBER OF DIGITS \t\t\t:: "<<cd ;
	cout<<"\nTOTAL NUMBER OF SPACES \t\t\t:: "<<cs ;
	cout<<"\nTOTAL NUMBER OF SPECIAL SYMBOLS \t:: "<<css ;
	in.close();
}

void main()
{
	clrscr();
	count();
	getch();
}
