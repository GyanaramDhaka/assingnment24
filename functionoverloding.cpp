#include <iostream>
#include <conio.h>
using namespace std;
void findmaximum(int, int);
void findmaximum(float, float);
int main()
{
    int a, b;
    cout << "enter two numbers";
    cin >> a >> b;
    findmaximum(a, b);
    getch();
}
void findmaximum(int a, int b)
{
    if(a>b)
    cout<<a;
    else
    cout<<b;
}
void findmaximum(float a, float b)
{
    if(a>b)
    cout <<a;
    else
    cout<<b; 
}