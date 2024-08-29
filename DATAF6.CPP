//PROGRAM TO READ A TEXT FILE 'STORY.TXT' AND
//DISPLAY ALL THE WORDS OF THE FILE IN REVERSE ORDER
#include <fstream.h>
#include <conio.h>
#include <string.h>

void word_rev()
{
	ifstream in("story.txt",ios::in);
	char word[25];
	cout << "THE WORDS IN REVERSE ORDER ARE .......\n\n";
	while(in)
	{
		in >> word;
		if(in.eof())
			break;
		cout << strrev(word) << " \t";
	}
}

void main()
{
	clrscr();
	word_rev();
	getch();
}
