#include <iostream.h>
#include<conio.h>
void swap(int,int);
void main() {
    int a, b;
    clrscr();
    cout << "Enter two numbers: ";
    cin >> a >> b;
    cout << "Before Swap: a = " << a << ", b = " << b ;
    swap(a,b);
    getch();
}
void swap(int a,int b)
{
    a = a + b;
    b = a - b;
    a = a - b;

    cout << "After Swap "  << a <<endl  << b ;

}