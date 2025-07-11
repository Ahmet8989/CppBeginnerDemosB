#include <iostream>

int main()
{
    // 1 dollar -> 100 cents, 1 quarter -> 25 cents, 1 dime -> 10 cents, 1 nickel -> 5 cents, 1 penny -> 1 cent
    int amountOfCents{};
    std::cout << "Enter an amount in cents..: ";
    std::cin >> amountOfCents;
    int amountofDollars;
    int amountofQuarters;
    int amountofDimes;
    int amountofNickels;
    int amountofPennies;
    amountofDollars = amountOfCents / 100;
    int remainderOne = (amountOfCents)-(amountofDollars * 100);
    amountofQuarters = remainderOne / 25;
    remainderOne = (remainderOne)-(amountofQuarters * 25);
    amountofDimes = remainderOne / 10;
    remainderOne = (remainderOne)-(amountofDimes * 10);
    amountofNickels = remainderOne / 5;
    remainderOne = (remainderOne)-(amountofNickels * 5);
    amountofPennies = remainderOne / 1;
    std::cout << "You can provide this change as follows..: " << std::endl;
    std::cout << "Dollars..: " << amountofDollars << std::endl;
    std::cout << "Quarters..: " << amountofQuarters << std::endl;
    std::cout << "Dimes..: " << amountofDimes << std::endl;
    std::cout << "Nickels..: " << amountofNickels << std::endl;
    std::cout << "Pennies..: " << amountofPennies << std::endl;
    int amountofDollarsAlternative;
    int amountofQuartersAlternative;
    int amountofDimesAlternative;
    int amountofNickelsAlternative;
    int amountofPenniesAlternative;
    int balance;
    amountofDollarsAlternative = amountOfCents / 100;
    balance = amountOfCents % 100;
    amountofQuartersAlternative = balance / 25;
    balance = balance % 25;
    amountofDimesAlternative = balance / 10;
    balance = balance % 10;
    amountofNickelsAlternative = balance / 5;
    balance = balance % 5;
    amountofPenniesAlternative = balance / 1;
    std::cout << "Alternatively provide this change as follows..: " << std::endl;
    std::cout << "Dollars..: " << amountofDollarsAlternative << std::endl;
    std::cout << "Quarters..: " << amountofQuartersAlternative << std::endl;
    std::cout << "Dimes..: " << amountofDimesAlternative << std::endl;
    std::cout << "Nickels..: " << amountofNickelsAlternative << std::endl;
    std::cout << "Pennies..: " << amountofPenniesAlternative << std::endl;
}
