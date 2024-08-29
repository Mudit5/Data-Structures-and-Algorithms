//PROGRAM TO ILLUSTRATE THE USE OF BINARY FILES
#include<conio.h>
#include<fstream.h>
#include<stdio.h>
#include<string.h>
#include<process.h>

class student
{
	int rno;
	char name[25];
	float marks;

	public:
	void getdata()
	{
		cout << endl;
		cout <<"\n********* ENTER THE DATA OF STUDENT ********\n";
		cout <<"\nENTER THE ROLL NUMBER \t:: ";
		cin >>rno;
		cout <<"\nENTER THE NAME  \t:: ";
		gets(name);
		cout <<"\nENTER THE MARKS \t:: ";
		cin >>marks;
	}
	void putdata()
	{
		cout <<endl;
		cout <<"\n********** DATA OF STUDENTS **********\n";
		cout<<"\nROLL NUMBER \t:: ";
		cout<<rno;
		cout<<"\nNAME \t\t:: ";
		cout<<name;
		cout<<"\nMARKS \t\t:: ";
		cout<<marks;
	}
	void modify()
	{
		cout<<"\nENTER THE NEW NAME \t:: ";
		gets(name);
		cout<<"\nENTER THE NEW MARKS \t:: ";
		cin>>marks;
	}
	int retrno()                          //accessor function
	{
		return rno;
	}
	char * retname()
	{
		return name;
	}
	float retmarks()
	{
		return marks;
	}
};

void add()
{
	ofstream out("stud.dat",ios::binary|ios::app);
	student s;
	s.getdata();
	out.write((char *)&s,sizeof(s));
	out.close();
	cout<<"\n******** OBJECT APPENDED TO THE FILE ********\n";
}

void show()
{
	ifstream in("stud.dat",ios::binary|ios::in);
	student s;
	while(in)
	{
		in.read((char *)&s,sizeof(s));
		if(in.eof())
			break;
		s.putdata();
	}
	in.close();
}

void searchrno()
{
	ifstream in("stud.dat",ios::binary|ios::in);
	int r;
	cout << "\nENTER THE ROLL NUMBER TO BE SEARCHED :: ";
	cin >> r;
	int found=0;
	student s;
	while(in)
	{
		in.read((char *)&s,sizeof(s));
		if(in.eof())
			break;
		if(s.retrno()==r)
		{
			s.putdata();
			found=1;
			break;
		}
	} // while ends
	if(found==0)
		cout<<"\n******** ROLL NUMBER NOT FOUND ********\n";
	in.close();
}

void searchname()
{
	ifstream in("stud.dat",ios::binary|ios::in);
	char n[30];
	cout<<"\nENTER THE NAME TO BE SEARCHED ::";
	gets(n);
	int found=0;
	student s;
	while(in)
	{
		in.read((char *)&s,sizeof(s));
		if(in.eof())
			break;
		if(strcmpi(s.retname(),n)==0)
		{
			s.putdata();
			found=1 ;
		}
	} // while ends
	if(found==0)
		cout<<"\n******** NAME NOT FOUND ********\n";
	in.close();
}

void modify()
{
	ifstream in("stud.dat",ios::binary|ios::in);
	ofstream out("temp.dat",ios::binary|ios::out);
	int r;
	cout<<"\nENTER THE ROLL NUMBER TO BE EDITED :: ";
	cin>>r;
	int found=0;
	student s;
	while(in)
	{
		in.read((char *)&s,sizeof(s));
		if(in.eof())
			break;
		if(s.retrno()==r)
		{
			s.modify();
			out.write((char *)&s,sizeof(s));
			cout<<"\n****** EDITED ******\n";
			found=1;
		}
		else
			out.write((char *)&s,sizeof(s));
	} // while ends
	if(found==0)
		cout<<"\n****** ROLL NUMBER NOT FOUND ******\n";
	in.close();
	out.close();
	remove("stud.dat");
	rename("temp.dat","stud.dat");
}

void deleterec()
{
	ifstream in("stud.dat",ios::binary|ios::in);
	ofstream out("temp.dat",ios::binary|ios::out);
	int r;
	cout<<"\nENTER THE ROLL NUMBER TO BE DELETED :: ";
	cin>>r;
	int found=0;
	student s;
	while(in)
	{
		in.read((char *)&s,sizeof(s));
		if(in.eof())
			break;
		if(s.retrno()!=r)
			out.write((char *)&s,sizeof(s));
		else
			found=1;
	} // while ends
	if(found==0)
		cout<<"\n******** ROLL NUMBER NOT FOUND ********\n";
	in.close();out.close();
	remove("stud.dat");
	rename("temp.dat","stud.dat");
}
void main()
{
	clrscr();
	int n;
	char ch;
	do
	{
		clrscr();
		cout <<"\n******* INPUT THE FUNCTION YOU WANT TO PERFORM *******\n";
		cout <<endl;
		cout <<"1 -> ADD RECORD \n";
		cout <<"2 -> SHOW RECORD \n";
		cout <<"3 -> DELETE RECORD \n";
		cout <<"4 -> MODIFY RECORD \n";
		cout <<"5 -> SEARCH A RECORD BY ROLL NO \n";
		cout <<"6 -> SEARCH A RECORD BY NAME \n";
		cout <<"7 -> EXIT \n";
		cout <<endl << "ENTER YOUR CHOICE :: ";
		cin >> n;
		cout <<endl;

		switch(n)
		{
			case 1:
			{
				add();
				break;
			}
			case 2:
			{
				show();
				break;
			}
			case 3:
			{
				deleterec();
				break;
			}
			case 4:
			{
				modify();
				break;
			}
			case 5:
			{
				searchrno();
				break;
			}
			case 6:
			{
				searchname();
				break;
			}
			case 7:
			{
				exit(0);
				break;
			}
			default:
			{
				cout << "\n****** INVALID INPUT ******\n";
				exit(0);
				break;
			}
		}
		cout << endl << "\nWOULD YOU LIKE TO CONTINUE [Y/N] :: ";
		cin >> ch;
	}while(ch == 'Y' || ch == 'y');
	getch();
	}