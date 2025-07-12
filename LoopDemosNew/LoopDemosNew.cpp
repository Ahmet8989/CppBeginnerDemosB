#include <iostream>
#include <vector>

int main()
{
    for (int i{ 1 }, j{ 5 }; i <= 5; i++, j++)
    {
        std::cout << i << " + " << j << " = " << (i + j) << std::endl;
    }
    std::vector<int> numbersOne{ 10, 20, 30, 40, 50 };
    for (int i{ 0 }; i < 5; i++)
    {
        std::cout << numbersOne[i] << std::endl;
    }
    std::cout << "==================" << std::endl;
    for (unsigned int i{ 0 }; i < numbersOne.size(); i++)
    {
        std::cout << numbersOne[i] << std::endl;
    }
    std::cout << "==================" << std::endl;
    char grades[5]{'A', 'B', 'C', 'D', 'F'};
    for (char grade : grades)
    {
        std::cout << grade << std::endl;
    }
}
