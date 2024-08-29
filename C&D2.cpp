#include<iostream.h>
#include<conio.h>
#include<string.h>
#include<stdio.h>
//to illustrate the calculation of count of objects created  using static variable
class student
{
 int rno;
 char name[30];
 float marks;
 //declaring static data variable
 static int count;
 public:
  //default ctor
  student()
  {
   rno=0;
   strcpy(name,"NA");
   marks=0.0;
   count++;    //incrementing static data member
   cout<<"creating object number - "<<count<<endl;
  }
  static void showcount()
  {
   cout<<"number of objects created = "<<count<<endl;
  }
 };

 int student::count=0;  //defining static data member outside class

 void main()
 {
  clrscr();
  //calling static member func using class name before any object exists
  student::showcount();
  //creating three class objects
  student s1,s2,s3;
  //calling static member func using class name after 3 objects are created
  student::showcount();
  getch();
 }
