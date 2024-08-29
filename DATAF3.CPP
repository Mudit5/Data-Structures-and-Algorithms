//PROGRAM TO DISPLAY THE COUNT NUMBER OF LINES IN A TEXT FILE
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
	out.close();

	char ch[200];
	int c = 0;
	in.open("text.txt");
	if(!in)
	{
		cout << "\nFILE CANNOT BE OPENED\n";
		exit(1);
	}
	while(in)
	{
		in.getline(ch,200);
		if(in.eof())
			break;
		cout<<ch<<endl;
		c++;
	}
	in.close();
	cout << "\n\nNUMBER OF LINES ARE :: ";
	cout << c;
	getch();
}
