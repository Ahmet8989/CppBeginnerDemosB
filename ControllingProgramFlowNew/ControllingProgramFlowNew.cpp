#include <iostream>

int main()
{
    char letterGrade{};
    std::cout << "Enter the letter grade you expect on the exam..: " << std::endl;
    std::cin >> letterGrade;

    switch (letterGrade)
    {
    case('a'):
    case('A'):
        std::cout << "You need a 90 or above, study hard!" << std::endl;
        break;
    case('b'):
    case('B'):
        std::cout << "You need a 80-89 for a B, go study!" << std::endl;
        break;
    case('c'):
    case('C'):
        std::cout << "You need a 70-79 for an average grade" << std::endl;
        break;
    case('d'):
    case('D'):
        std::cout << "Hmm you should strive for a better grade. All you need 60 - 69" << std::endl;
        break;
    default:
        std::cout << "You did not enter a valid grade" << std::endl;
    }
    std::cout << std::endl;
    std::cout << std::endl;
    std::cout << std::endl;
    int a{ 10 }, b{ 20 };
    int score{ 93 };
    int result{}, result2{}, result3{};
    result = (a > b) ? a : b;
    result2 = (a < b) ? (b - a) : (a - b);
    result3 = (b != 0) ? (a / b) : (1);
    std::cout << ((score >= 90) ? "Excellent" : "Good") << std::endl;
    std::cout << "Result..: " << result << std::endl;
    std::cout << "Result2..: " << result2 << std::endl;
    std::cout << "Result3..: " << result3 << std::endl;
}
