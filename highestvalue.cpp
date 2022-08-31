#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
    int a;
    int b;
    int c;
    c = 0;
    cout << "enter a number ";
    cin >> a;
    while (a != 0)
    {
        b = a % 10;
        if (b > c)
        {
            c = b;
        }
        a = a / 10;
    }
    cout << "gretest number is =" << c << endl;
    getch();
}
