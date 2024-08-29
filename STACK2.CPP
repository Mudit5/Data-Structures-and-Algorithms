//PROGRAM TO IMPLEMENT A LINEAR STACK USING CLASSES
#include<iostream.h>
#include<conio.h>
#include<process.h>
const int SIZE=5;

class STACK
{
    private:
	int num[SIZE];   //stack of numbers
	int top;
    public:
	STACK();    //defualt constructor
	void push(int);
	void pop();
	void displayItems();
};

STACK::STACK()
{
    top=-1;
}


void STACK::push(int n)
{
	cout<<"\n********* PUSH OPERATION *********\n";
	//CHECK STACK IS FULL OR NOT
	if(top==SIZE-1)
	{
		cout<<"********* STACK OVERFLOW *********\n";
		return;
	}
	top++;
	num[top]=n;
	cout <<"VALUE PUSHED TO STACK\n";
}

void STACK::pop()
{
	cout<<"\n********** POP OPERATION **********";
	int temp;
	//CHECK FOR EMPTY STACK
	if(top==-1)
	{
		cout<<"\n********* STACK UNDERFLOW *********\n";
		return;
	}
	temp=num[top];
	cout<<"\nVALUE POPPED \t\t\t:: "<<temp<<endl;
	top--;
}

void STACK::displayItems()
{
	cout<<"\n******** DISPLAY OPERATION ********";
	if(top==-1)
	{
		cout<<"\n********* STACK UNDERFLOW *********\n";
		return;
	}
	cout<<"\nSTACK IS ........\n ";
	for(int i=top; i>=0; i--)
		cout<<num[i]<<"\t";
	cout<<endl;
}

void main()
{
	clrscr();
	//DECLARE A CLASS OBJECT
	STACK stk;
	int choice, n,temp;
	char ch;
	do
	{
		clrscr();
		cout<<"\n\n******** STACK OPERATIONS ********\n";
		cout<<"1 - PUSH ITEM."<<endl;
		cout<<"2 - POP ITEM."<<endl;
		cout<<"3 - DISPLAY ITEMS (Print STACK)."<<endl;
		cout<<"4 - EXIT."<<endl;
		cout<<"\nENTER YOUR CHOICE \t\t:: ";
		cin>>choice;
		switch(choice)
		{
			case 1: cout<<"ENTER ITEM TO INSERT \t\t:: ";
				cin>>n;
				stk.push(n);
				break;
			case 2: stk.pop();
				break;
			case 3: stk.displayItems();
				break;
			case 4: exit(0);

		       default: cout<<"\nINVALID CHOICE."<<endl;
		}      //end of switch
		cout<<"\nDO YOU WISH TO CONTINUE [Y/N] \t:: ";
		cin>>ch;
	}while(ch=='y' || ch=='Y');
	getch();
}
