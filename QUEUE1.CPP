//PROGRAM TO IMPLEMENT A LINEAR QUEUE 
#include<iostream.h>
#include<conio.h>
#include<process.h>
const int SIZE=5;

int num[SIZE];		//QUEUE OF NUMBERS
int front=-1,rear=-1;
void addq(int);
void delq();
void displayItems();

void addq(int n)
{
	cout << "\n************ ADD OPERATION *************";
	//CHECK IF LINEAR QUEUE IS FULL OR NOT
	if(rear==SIZE-1)
	{
		cout<<"\n************ QUEUE OVERFLOW ************\n";
		return;
	}
	if(front==-1)
		front=rear=0;
	else
		rear++;
	num[rear]=n;
	cout << "\nVALUE ADDED TO QUEUE." << endl;
}

void delq()
{
	cout << "\n************ DELETE OPERATION ***********";
	int temp;
	//CHECK FOR EMPTY QUEUE
	if(front==-1)
	{
		cout<<"\n************ QUEUE UNDERFLOW ************\n";
		return;
	}
	temp=num[front];
	cout<<"\nVALUE REMOVED \t\t::"<<temp;
	if(front==rear)
		front=rear=-1;
	else
		front++;
	cout << endl;
}

void displayItems()
{
	cout << "\n*********** DISPLAY OPERATION ***********";
	if(front==-1)
	{
		cout<<"\n************ QUEUE UNDERFLOW ************\n";
		return;
	}
	cout<<"\nQUEUE IS ....\n ";
	for(int i=front; i<=rear;i++)
		cout<<num[i]<<"\t";
	cout<<endl;
}

void main()
{
	clrscr();
	int choice, n,temp;
	char ch;
	do
	{
		clrscr();
		cout<<"\n********** QUEUE OPERATIONS **********\n";
		cout<<"1 - ADD ITEM."<<endl;
		cout<<"2 - DELETE ITEM."<<endl;
		cout<<"3 - DISPLAY ITEMS (Print QUEUE)."<<endl;
		cout<<"4 - EXIT."<<endl;
		cout<<"\nENTER YOUR CHOICE \t\t:: ";
		cin>>choice;
		switch(choice)
		{
			case 1:	cout<<"ENTER ITEM TO INSERT \t\t:: ";
				cin>>n;
				addq(n);
				break;
			case 2:	delq();
				break;
			case 3:	displayItems();
				break;
			case 4:	exit(0);

		       default: cout<<"INVALID CHOICE.   "<<endl;
		}   //end of switch
		cout<<"\nDO YOU WISH TO CONTINUE [Y/N] \t:: ";
		cin>>ch;
	}while(ch=='y' || ch=='Y');
	getch();
}
