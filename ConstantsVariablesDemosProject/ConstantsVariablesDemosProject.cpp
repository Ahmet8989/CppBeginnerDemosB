#include <iostream>
#include <string>
#include <climits>
// Size and precision often compiler dependent, so you have to (include) the (climits)
//int ageFour{18}; -> Global variable 
// Integer types: short, int, long, long long
// Floating-point type: float, double, long double
// Boolean type: bool (zero is false, non-zero is true)
// Integer Literal Constants: (13 - integer), (13U - unsigned integer), (13L - long integer), (13LL - long long integer)
// Floating-point Literal Constants: (13.4 - double), (13.4F - float), (13.4L - long double)

int main()
{
    int ageOne = 23;     // C-like initialization
    int ageTwo(23);      // Constructor initialization 
    int ageThree{ 23 };  // C++11 list initialization syntax 
    double salary;
    //string name = "James";
    //Person james;
    //Account franks_account;
    char myMiddleInitial{ 'J' };
    std::cout << "My middle initial is: " << myMiddleInitial << std::endl;
    unsigned short int examScore{ 95 };
    std::cout << "Your exam score is: " << examScore << std::endl;
    int representedCountry{ 95 };
    std::cout << "There were " << representedCountry << " country represented in the meeting." << std::endl;
    long numberOfPeopleInFlorida = 23000000;
    std::cout << "There are about " << numberOfPeopleInFlorida << " people live in Florida." << std::endl;
    long long distanceToAlphaCentauri{ 9'461'000'000'000 };
    std::cout << "The distance between the earth and Alpha Centauri is equal to the " << distanceToAlphaCentauri << " kms." << std::endl;
    float carPayment = 405.23;
    std::cout << "Payment of the car " << carPayment << std::endl;
    double pi{ 3.14159 };
    std::cout << "Pi number equals " << pi << std::endl;
    long double veryBigNumber{ 2.7e123 };
    std::cout << "(" << veryBigNumber << ") is very big number." << std::endl;
    bool gameOver{ false };
    std::cout << "The result of the game over situation is: " << gameOver << std::endl;
    std::cout << "---------------------\n" << std::endl;


    std::cout << "The maximum value of an integer can hold " << INT_MAX << std::endl;
    std::cout << "The minimum value of an integer can hold " << INT_MIN << std::endl;
    std::cout << "The maximum value of an long can hold " << LONG_MAX << std::endl;
    std::cout << "The minimum value of an long can hold " << LONG_MIN << std::endl;
    std::cout << "The maximum value of an float can hold " << FLT_MAX << std::endl;
    std::cout << "The minimum value of an float can hold " << FLT_MAX << std::endl;
    std::cout << "Size of an char variable is " << sizeof(char) << " byte. " << std::endl;
    std::cout << "Size of an unsigned int variable is " << sizeof(unsigned int) << " bytes. " << std::endl;
    std::cout << "Size of an short variable is " << sizeof(short) << " bytes. " << std::endl;
    std::cout << "Size of an integer variable is " << sizeof(int) << " bytes. " << std::endl;
    std::cout << "Size of an float variable is " << sizeof(float) << " bytes. " << std::endl;
    std::cout << "Size of a double variable is " << sizeof(double) << " bytes. " << std::endl;
    std::cout << "Size of an long variable is " << sizeof(long) << " bytes. " << std::endl;
    std::cout << "Size of an long long variable is " << sizeof(long long) << " bytes. " << std::endl;
    std::cout << "Size of an long double variable is " << sizeof(long double) << " bytes. " << std::endl;


    std::cout << "---------------------\n\n\n" << std::endl;
    int roomWidth{ 0 };
    int roomLength{ 0 };
    std::cout << "Please enter room width and length seperated with space..: " << std::endl;
    std::cin >> roomWidth >> roomLength;
    int roomArea = roomWidth * roomLength;
    std::cout << "Area of the room is: " << roomArea << std::endl;




    std::cout << "---------------------\n\n\n" << std::endl;
    std::cout << "HELLO WELCOME TO ROOM CLEANING SERVICE\n" << std::endl << std::endl;
    std::cout << std::endl;
    std::cout << "How many rooms would you like to cleaned? " << std::endl;
    int numberOfRooms{ 0 };
    std::cin >> numberOfRooms;
    std::cout << "\nEstimate for room cleaning service " << std::endl;
    std::cout << "Number of rooms: " << numberOfRooms << std::endl;
    const int pricePerRoom {30};
    std::cout << "Price per room: $" << pricePerRoom << std::endl;
    std::cout << "Cost: $" << (numberOfRooms * pricePerRoom) << std::endl;
    const double taxRate {0.06};
    std::cout << "Tax: $" << (numberOfRooms * pricePerRoom * taxRate) << std::endl;
    std::cout << "=================================================\n" << std::endl;
    std::cout << "Total estimate: $" << ((numberOfRooms * pricePerRoom) + (numberOfRooms * pricePerRoom * taxRate)) << std::endl;
    const int numberOfDays = 30;
    std::cout << "This estimate is valid for " << numberOfDays << " days." << std::endl;



    std::cout << "---------------------\n\n\n" << std::endl;
    std::cout << "HELLO WELCOME TO ROOM CLEANING SERVICE\n" << std::endl << std::endl;
    std::cout << std::endl;
    std::cout << "How many small rooms would you like to cleaned? " << std::endl;
    int numberOfSmallRooms{ 0 };
    std::cin >> numberOfSmallRooms;
    std::cout << "How many large rooms would you like to cleaned? " << std::endl;
    int numberOfBigRooms{ 0 };
    std::cin >> numberOfBigRooms;
    std::cout << "\nEstimate for room cleaning service " << std::endl;
    std::cout << "Number of small rooms: " << numberOfSmallRooms << std::endl;
    const int pricePerSmallRoom{ 35 };
    std::cout << "Price per small room: $" << pricePerSmallRoom << std::endl;
    std::cout << "Number of large rooms: " << numberOfBigRooms << std::endl;
    const int pricePerBigRoom{ 55 };
    std::cout << "Price per big room: $" << pricePerBigRoom << std::endl;
    std::cout << "Cost of small rooms: $" << (numberOfSmallRooms * pricePerSmallRoom) << std::endl;
    std::cout << "Cost of large rooms: $" << (numberOfBigRooms * pricePerBigRoom) << std::endl;
    //const double taxRate{ 0.06 };
    std::cout << "Tax: $" << (((numberOfSmallRooms * pricePerSmallRoom) + (numberOfBigRooms * pricePerBigRoom)) * taxRate) << std::endl;
    std::cout << "=================================================\n" << std::endl;
    std::cout << "Total estimate: $" << (((numberOfSmallRooms * pricePerSmallRoom) + (numberOfBigRooms * pricePerBigRoom)) + (((numberOfSmallRooms * pricePerSmallRoom) + (numberOfBigRooms * pricePerBigRoom)) * taxRate)) << std::endl;
    //const int numberOfDays = 30;
    std::cout << "This estimate is valid for " << numberOfDays << " days." << std::endl;
    return 0;

}
