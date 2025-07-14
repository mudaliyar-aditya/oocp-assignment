#include <iostream.h>
#include<conio.h>
void calc(float,float);
void main() {
    float a, b;

    cout << "Enter two numbers: ";
    cin >> a >> b;
    calc(a,b);

   }
void calc(float p,float q)
{
    cout << "Addition: " << a + b << endl;
    cout << "Subtraction: " << a - b << endl;
    cout << "Multiplication: " << a * b << endl;
    cout << "Division: " << a / b ;
    
}