#include <iostream>
#include <conio.h>
int result = 0;
int power(int, int);
int main()
{
    int x;
    int y;
    std::cout << "enter twonumber " << std::endl;
    std::cin >> x >> y;
    std::cout << power(x, y);
}
int power(int a, int b)
{
    int x = 1;
    if (a > 0)
    {
        x = b * power(a - 1, b);
        return x;
    }
    else
    {
        return x;
    }
}