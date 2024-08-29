//PROGRAM TO ILLUSTRATE DYNAMIC STACK USING STRUCTURES
#include<iostream.h>
#include<conio.h>
#include<process.h>

struct stack
{
	int rollno;
	stack *next;  	//SELF REFERENTIAL STRUCTURE
};
stack *top=NULL; 	//GLOBAL TOP POINTER

void push(int val)
{
	cout<<"\n********* PUSH OPERATION *********\n";
	stack *node=new stack;	//ASK MEMORY FOR A NODE AT RUN-TIME
	if(node==NULL)       	//CHECK FOR OVERFLOW
	{
		cout<<"\nMEMORY NOT GRANTED\n";
		return;
	}
	//FILL THE DATA PART AND ADDRESS PART OF THE NEW NODE
	node->rollno=val;
	node->next=top;
	cout <<"VALUE PUSHED TO STACK\n";
	//ATTACH THE NODE AT TOP OF STACK
	top=node;
}

void pop()
{
	cout<<"\n********** POP OPERATION **********";
	//CHECK FOR UNDERFLOW
	if(top==NULL)
	{
		cout<<"\n********* STACK UNDERFLOW *********\n";
		return;
	}
	stack *temp=top;	//ASSIGN TOP TO A TEMPORARY POINTER
	cout<<"\nTHE DELETED NODE VALUE IS \t:: "<<top->rollno<<endl;
	top=top->next;		//MOVE TOP TO THE NEXT NODE
	//RELEASE THE MEMORY BEING OCCUPIED BY THE NODE TO BE DELETED
	delete temp;
}

void display()
{
	cout<<"\n******** DISPLAY OPERATION ********";
	//CHECK FOR UNDERFLOW
	if(top==NULL)
	{
		cout<<"\n********* STACK UNDERFLOW *********\n";
		return;
	}
	stack *temp=top;
	cout<<"\nSTACK IS ........";
	while(temp!=NULL)
	{
		cout<<endl<<temp->rollno;
		temp=temp->next;
	}
	cout << endl;
}

void main()
{
	clrscr();
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
				push(n);
				break;
			case 2: pop();
				break;
			case 3: display();
				break;
			case 4: exit(0);

		       default: cout<<"\nINVALID CHOICE."<<endl;
		}      //end of switch
		cout<<"\nDO YOU WISH TO CONTINUE [Y/N] \t:: ";
		cin>>ch;
	}while(ch=='y' || ch=='Y');
	getch();
}
