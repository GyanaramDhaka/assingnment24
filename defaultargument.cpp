#include <iostream>
#include <conio.h>

using namespace std;
void  add(int, int, int = 0);
int main()
{
    int x, y, z;
    cout << "enter three numbers ";
    cin >> x >> y >> z;
    int choise = 0;
    while (1)
    {
        cout << "enter your choice " << endl;
        cout << "enter 1 to add 2 numbers " << endl;
        cout << "enter 2 to add 3 numbers " << endl;
        cin>>choise;
        switch (choise)
        {
        case 1:
            add(x, y);
            break;
        case 2:
            add(x, y, z);
            break;
        default:
            exit(0);
        }
    }

    getch();
}
void  add(int a, int b, int c)
{
    cout << "sum of 2 or 3 numbers is " << a + b + c << endl;
}