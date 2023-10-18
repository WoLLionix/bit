
#include <iostream>

int main()
{
    int n;
    std::cin >> n;

    if (n >= 128)
    {
        std::cout << 1;
        n -= 128;
    }
    else
        std::cout << 0;

    if (n >= 64)
    {
        std::cout << 1;
        n -= 64;
    }
    else
        std::cout << 0;

    if (n >= 32)
    {
        std::cout << 1;
        n -= 32;
    }
    else
        std::cout << 0;

    if (n >= 16)
    {
        std::cout << 1;
        n -= 16;
    }
    else
        std::cout << 0;

    if (n >= 8)
    {
        std::cout << 1;
        n -= 8;
    }
    else
        std::cout << 0;

    if (n >= 4)
    {
        std::cout << 1;
        n -= 4;
    }
    else
        std::cout << 0;

    if (n >= 2)
    {
        std::cout << 1;
        n -= 2;
    }
    else
        std::cout << 0;

    if (n >= 1)
    {
        std::cout << 1;
        n -= 1;
    }
    else
        std::cout << 0;
}
