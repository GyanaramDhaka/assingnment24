#include <iostream>
#include <conio.h>
using namespace std;
void primenumber(int );
int main()
{
    int x;
    cout<<"enter a number ";
    cin>>x;
    primenumber(x);
}
void primenumber(int x)
{
    if(x%2!=0||x%3!=0||x%7!=0||x%13!=0)
    cout<<"it is a prime number ";
    else
    cout<<"it is a not prime number ";
    getch();
}