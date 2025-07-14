#include <iostream.h>
#include<conio.h>
void max();
void main() 
{
	clrscr();
	max();
	getch();    
}
void max()
{
	int a, b, c;

    	cout << "Enter three numbers: ";
    	cin >> a >> b >> c;

    	if (a >= b && a >= c)
	{
        	cout << "Maximum is: " << a << endl;
	}
   	 else if (b >= a && b >= c)
        {	
		 cout << "Maximum is: " << b << endl;
	}
    	else
	{
        	cout << "Maximum is: " << c << endl;
	}

}