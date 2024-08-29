#include<iostream.h>
#include<conio.h>

void main()
{
clrscr();
int n[5]={5,6,7,8,9};

int *np[5];//array of pointers

np[0]=&n[0];
np[1]=&n[1];
np[2]=&n[2];
np[3]=&n[3];
np[4]=&n[4];

for(int i=0;i<5;i++)
{
cout<<&n[i]<<'\t'<<np[i]<<'\t'<<n[i]<<'\t'<<*np[i]<<'\t'<<&np[i]<<endl;
}
getch();
}
