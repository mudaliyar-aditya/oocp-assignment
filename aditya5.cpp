#include <iostream.h>
#include<conio.h>
void display();
void main() 
{
	clrscr();
	display();
	getch();
}
void display()
{
	  int count;

 	   cout << "Enter how many times to display 'Well Done': ";
 	   cin >> count;

 	   for (int i = 1; i <= count; i++) 
	   {
       		 cout << "Well Done" << endl;
   	   }

}