//PROGRAM TO DISPLAY THE NUMBER OF TIMES 'TO' APPEARS IN A TEXT FILE
# include <fstream.h>
# include <conio.h>
# include <process.h>
# include <ctype.h>
# include <string.h>

void main()
{
	clrscr();
	ofstream out;
	ifstream in;
	out.open("text.txt");
	out << "I like to READ comics."<< endl;
	out << "I like TO listen MUSIC."<< endl;
	out << "I like To PLAY chess."<< endl;
	out << "I like tO read NOVELS."<< endl;
	out << "I like watching movies too much."<< endl;

	cout << "\n******** THE TEXT IS ********\n\n";
	cout << "I like to READ comics."<< endl;
	cout << "I like TO listen MUSIC."<< endl;
	cout << "I like To PLAY chess."<< endl;
	cout << "I like tO read NOVELS."<< endl;
	cout << "I like watching movies too much."<< endl;
	out.close();

	char ch[27];
	int c = 0;
	in.open("text.txt");
	if(!in)
	{
		cout << "\nFILE CANNOT BE OPENED\n";
		exit(1);
	}
	while(in)
	{
		in >> ch;
		if(in.eof())
			break;
		if(strcmpi(ch, "to")==0)
			c++;
	}
	in.close();
	cout << "\nNUMBER OF TIMES DIFFERENT TYPE OF 'TO' APPEAR IS :: ";
	cout << c;
	getch();
}
