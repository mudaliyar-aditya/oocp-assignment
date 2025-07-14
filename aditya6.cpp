#include <iostream.h>
#include<conio.h>
void bill();
void main()
{
	clrscr();
	bill();
	getch();
}
void bill()
{
    int units;
    float billAmount = 0, surcharge = 0, totalAmount;

    cout << "Enter the number of units consumed: ";
    cin >> units;

    if (units <= 100)
    {
        billAmount = units * 0.60;
    } 
    else if (units <= 300) 
    {
        billAmount = (100 * 0.60) + (units - 100) * 0.80;
    }
    else 
    {
        billAmount = (100 * 0.60) + (200 * 0.80) + (units - 300) * 0.90;
    }

    
    if (billAmount < 30)
    {
        billAmount = 30;
    }
    
    if (billAmount > 300) 
    {
        surcharge = billAmount * 0.15;
    }

    totalAmount = billAmount + surcharge;

    cout << "\nElectricity Bill Summary:";
    cout << "\n---------------------------";
    cout << "\nUnits Consumed: " << units;
    cout << "\nBase Bill Amount: Rs. " << billAmount;
    cout << "\nSurcharge: Rs. " << surcharge;
    cout << "\nTotal Bill to Pay: Rs. " << totalAmount;

}