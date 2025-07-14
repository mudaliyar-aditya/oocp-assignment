#include <iostream.h>
#include<conio.h>
void tem();
void main() 
{
        clrscr();
	tem();
	getch();
}
void tem()
{
	float celsius, fahrenheit;

   	cout << "Enter temperature in Celsius: ";
  	cin >> celsius;

    	fahrenheit = (celsius * 9 / 5) + 32;

    	cout << "Temperature in Fahrenheit: " << fahrenheit << "°F" ;

}