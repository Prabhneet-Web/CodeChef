#include <iostream>

int main()
{
    int T;
    std::cin >> T;

    for (int i = 0; i < T; i++)
    {
        int X, Y;
        std::cin >> X >> Y;
        if (X == Y)
            std::cout << "YES" << std::endl;
        else
            std::cout << "NO" << std::endl;
    }
}