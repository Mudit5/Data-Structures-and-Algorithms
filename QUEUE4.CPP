//PROGRAM TO ILLUSTRATE LINKED QUEUE USING STRUCTURE
#include<iostream.h>
#include<conio.h>
#include<process.h>

struct queue
{
	int rno;
	queue *next;
}*front=NULL,*rear=NULL;

void addqueue(int val)
{
	cout << "\n********* ADD OPERATION **********";
	//ALLOCATE MEMORY AT RUN TIME FOR NEW NODE
	queue *node=new queue;
	//CHECK FOR OVERFLOW
	if(node==NULL)
	{
		cout<<"\nMEMORY NOT GRANTED\n";
		return;
	}
	//FILL THE DATA PART OF THE NEW NODE
	//ASSIGN NULL TO THE ADDRESS PART OF THE NEW NODE AS IT WILL
	//ALWAYS BE ADDED AT THE END OF QUEUE
	node->rno=val;
	node->next=NULL;
	//ATTACH THE NEW NODE TO QUEUE
	if(front==NULL)		//INITIALLY EMPTY QUEUE
	{
		front=node;
		rear=node;
	}
	else             	//QUEUE IN NON-EMPTY
	{
		rear->next=node;
		rear=node;
	}
	cout << "\nNODE ADDED TO QUEUE." << endl;
}

void delqueue()
{
	cout << "\n********* DELETE OPERATION ********";
	//CHECH FOR UNDERFLOW
	if(front==NULL)
	{
		cout<<"\n********* QUEUE UNDERFLOW *********\n";
		return;
	}
	//STORE FRONT IN A TEMPORARY POINTER
	queue *temp=front;
	//DISPLAY THE DATA FIELD OF THE NODE BEING DELETED
	cout<<"\nROLL NUMBER BEING DELETED IS \t:: "<<front->rno<<endl;
	//UPDATE FRONT
	if(front==rear) 	//QUEUE HAS ONLY ONE NODE
	{
		front=NULL;
		rear=NULL;
	}
	else           		//QUEUE HAS MORE THAN ONE NODE
	{
		front=front->next;
	}
	//DEALLOCATE THE MEMORY OF THE DELETED NODE
	delete temp;
}

void display()
{
	cout<<"\n******** DISPLAY OPERATION ********";
	//CHECK FOR UNDERFLOW
	if(front==NULL)
	{
		cout<<"\n********* QUEUE UNDERFLOW *********\n";
		return;
	}
	cout<<"\nQUEUE IS .... ";
	queue *temp=front;
	while(temp!=NULL)
	{
		cout<<endl<<temp->rno;
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
		cout<<"\n\n******** QUEUK OPERATIONS ********\n";
		cout<<"1 - PUSH ITEM."<<endl;
		cout<<"2 - POP ITEM."<<endl;
		cout<<"3 - DISPLAY ITEMS (Print QUEUE)."<<endl;
		cout<<"4 - EXIT."<<endl;
		cout<<"\nENTER YOUR CHOICE \t\t:: ";
		cin>>choice;
		switch(choice)
		{
			case 1: cout<<"ENTER ITEM TO INSERT \t\t:: ";
				cin>>n;
				addqueue(n);
				break;
			case 2: delqueue();
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
