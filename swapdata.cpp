#include <iostream>
#include <conio.h>
using namespace std;
void swapdata(int &, int &);
int main()
{
    int a, b;
    cout << "enter two data";
    cin >> a >> b;
    int &x = a, &y = b;
    cout << "before swaping data"
         << "a=" << x << "b=" << y << endl;
    swapdata(x, y);
    cout << "after swaping data"
         << "a=" << x << "b= " << y << endl;
    getch();
}
void swapdata(int &x, int &y)
{
    x = x + y;
    y = x - y;
    x = x - y;
}