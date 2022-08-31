#include <iostream>
#define PI 3.14
#include <conio.h>
using namespace std;
void area(float);
void area(int, int, int);
void area(int, int);
int main()
{
    float r;
    int a, b, c;

    int choise = 0;
    while (1)
    {
        cout << "enter your choise " << endl;
        cout << "enter 1 to find area of circle " << endl;
        cout << "enter 2 to find area of rectangle " << endl;
        ;
        cout << "etner 3 to find area of tringle " << endl;
        cout << "enter 4 to exit" << endl;
        cin >> choise;
        switch (choise)
        {
        case 1:
            cout << "enter your radius ";
            cin >> r;
            area(r);
            break;
        case 2:
            cout << "enter two numbers ";
            cin >> a >> b;
            area(a, b);
            break;
        case 3:
            cout << "enter three numbers ";
            cin >> a >> b >> c;
            area(a, b, c);
            break;
        default:
            exit(0);
        }
    }
}
void area(float r)
{
    cout << "area of circle is " << PI * r * r;
}
void area(int a, int b)
{
    cout << "area of rectangle is " << a * b;
}

void area(int a, int b, int c)
{
    int s = 0;
    s = (a + b + c) / 3;
    s = s ^ 1 / 2 * (s - a) ^ 1 / 2 * (s - b) ^ 1 / 2 * (s - c) ^ 1 / 2;
    cout << "area of tringle is " << s << endl;
}