//PROGRAM TO READ A TEXT FILE 'STORY.TXT' AND
//COPY ALL THE WORDS BEGINNING WITH VOWELS TO 'VOWELS.TXT'
#include <fstream.h>
#include <conio.h>

void copy_vowels()
{
	ifstream in("story.txt",ios::in);
	ofstream out("vowels.txt",ios::out);
	char word[25];
	while(in)
	{
		in>>word;
		if(in.eof())
			break;
		switch(word[0])
		{
			case 'a' : out<<word<<" ";
				break;
			case 'e' : out<<word<<" ";
				break;
			case 'i' : out<<word<<" ";
				break;
			case 'o' : out<<word<<" ";
				break;
			case 'u' : out<<word<<" ";
				break;
			case 'A' : out<<word<<" ";
				break;
			case 'E' : out<<word<<" ";
				break;
			case 'I' : out<<word<<" ";
				break;
			case 'O' : out<<word<<" ";
				break;
			case 'U' : out<<word<<" ";
				break;
		}
	}
	in.close();
	out.close();
	cout<<"DATA WRITTEN TO FILE ";
}

void main()
{
	clrscr();
	copy_vowels();
	getch();
}
