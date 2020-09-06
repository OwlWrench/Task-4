
#include <iostream>

int choice;
int main()
{
    std::cout << "What do you like to drink?\n";
    std::cout << "1: Coffee\n2: Tea\n3: Cola\n";
    std::cin >> choice;

    if (choice == 1)
    {
        std::cout << "Coffee is delicius";
    }
    if (choice == 2)
    {
        std::cout << "Tea gives peace of mind";
    }
    if (choice == 3)
    {
        std::cout << "Coke will give you a white smile";
    }
    if(choice != 1 && choice != 2 && choice != 3)
    {
        std::cout << "That wasn't one of the options...";
    }
}


