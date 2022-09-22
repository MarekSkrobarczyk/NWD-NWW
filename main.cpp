#include<iostream>

int NWD(int a, int b)
{
    if (b != 0)
        return NWD(b, a % b);

    return a;
}

int NWW(int a, int b)
{
    return (a / NWD(a, b) * b);
}

    

int main()
{
    int a, b;

    std::cout << "Enter first number ";
    std::cin >> a;

    std::cout << "Enter second number ";
    std::cin >> b;

    std::cout << "NWD(" << a << "," << b << ") = " << NWD(a, b) << std::endl;
    std::cout << "NWW(" << a << ", " << b << ") = " << NWW(a,b) << std::endl;

    return 0;
}
