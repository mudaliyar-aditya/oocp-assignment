#include <iostream.h>
#include<conio.h>
void bill();
int main() 
{
	clrscr();
	bill();
	getch();
}
void bill()
{
	char name[20];
    int units;
    float bill = 0, surcharge = 0, total;
    cout << "Enter your name: ";
    cin>>name; // Read full name
    cout << "Enter units consumed: ";
    cin >> units;
    if (units <= 100)
    {
        bill = units * 0.60;
    }
    else if (units <= 300)
    {
        bill = (100 * 0.60) + (units - 100) * 0.80;
    }
    else
    {
        bill = (100 * 0.60) + (200 * 0.80) + (units - 300) * 0.90;
    }


    if (bill < 50)
    {
        bill = 50;
    }
    if (bill > 300)
    {
        surcharge = bill * 0.15;
    }
    total = bill + surcharge;
    cout << "Electricity Bill for: " << name << endl;
    cout << "Units Consumed: " << units << endl;
    cout << "Base Charges: Rs. " << bill << endl;
    cout << "Surcharge: Rs. " << surcharge << endl;
    cout << "Total Bill: Rs. " << total ;

}