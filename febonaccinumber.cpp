#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
    int a;
    cout << "enter a number ";
    cin >> a;
    cout << endl;
    int i = 0, j = 1;
    int x = 0;
    int y;
    while (j < a)
    {
        y = j;
        j = i + j;
        i = y;
    }
    if (j == a)
        cout << "given number is term of febonacci series" << endl;
    else
        cout << "given number is not term of febonacci series" << endl;
    getch();
}