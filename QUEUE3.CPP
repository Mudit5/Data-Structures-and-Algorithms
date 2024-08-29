//PROGRAM TO IMPLEMENT A CIRCULAR QUEUE
#include<iostream.h>
#include<conio.h>
#include<process.h>

const int SIZE=5;
int num[SIZE];   	//QUEUE OF NUMBERS
int front=-1,rear=-1;
void addq(int);
void delq();
void displayItems();

void addq(int n)
{
	cout << "\n************ ADD OPERATION *************";
	//CHECK IF CIRCULAR QUEUE IS FULL OR NOT
	if((front==0 && rear==SIZE-1) || (front==rear+1))
	{
		cout<<"\n******** CIRCULAR QUEUE OVERFLOW ********\n";
		return;
	}
	//SET REAR
	if(front==-1)        	//INITIALLY EMPTY CIRCULAR QUEUE (ONCE)
		front=rear=0;
	//IF REACH END OF QUEUE WITH EMPTY SLOTS IN THE BEGINNING
	else if(rear==SIZE-1)	//ROTARE TO BEGINNING (ONCE)
		rear=0;
	else
		rear++;    	//MULTIPLE TIMES
	num[rear]=n;
	cout << "\nVALUE ADDED TO QUEUE." << endl;
}

void delq()
{
	cout << "\n************ DELETE OPERATION ***********";
	//CHECK FOR EMPTY QUEUE
	int temp;
	if(front==-1)
	{
		cout<<"\n******** CIRCULAR QUEUE UNDERFLOW *******\n";
		return;
	}
	temp=num[front];
	num[front]=-1;
	cout<<"\nVALUE REMOVED \t\t::"<<temp;
	if(front==rear)
		front=rear=-1;
	else if(front==SIZE-1)
		front=0;
	else
		front++;
	cout << endl;
}

void displayItems()
{
	cout << "\n*********** DISPLAY OPERATION ***********";
	if(front==-1)
	{
		cout<<"\n******** CIRCULAR QUEUE UNDERFLOW *******\n";
		return;
	}
	cout<<"\nQUEUE IS ....\n ";
	for(int i=0; i<SIZE;i++)
		cout<<num[i]<<"\t";
	cout<<endl;
}

void main()
{
	clrscr();
	for(int i=0;i<SIZE;i++)
		num[i]=-1;
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
