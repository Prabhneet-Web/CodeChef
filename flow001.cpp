#include <iostream>

int add(int a, int b);

int main()
{
    int testCases;
    std::cin >> testCases;

    int a, b;

    for (int i = 0; i < testCases; i++)
    {
        std::cin >> a >> b;
        std::cout << add(a, b) << std::endl;
    }
}

int add(int a, int b)
{
    return a + b;
}