#include <iostream>

int MainMenu();
int Addition();
int Subtraction();
int Multiplication();
int Division();

int main()
{
    int val1, val2, choice;
    char continueChoice = 'n';

    do
    {
        do
        {
            switch (MainMenu())
            {
            case 1:
                Addition();
                break;
            case 2:
                Subtraction();

                break;
            case 3:
                Multiplication();
                break;
            case 4:
                Division();
                break;
            default:
                std::cout << "User Input Incorrect\n\n";
                break;
            }

        } while (choice < 0 || choice > 5);
    
        std::cout << "Do you want to Contninue [y/n]:";
        std::cin >> continueChoice;
    } while (continueChoice == 'y');
    return 0;
}

int MainMenu() {
        int choice;
            std::cout 
                << "--- Please Select for Math Solution to use ---\n"
                << "1. Add\n"
                << "2. Subtract\n"
                << "3. Multipliction\n"
                << "4. Division\n"
                << "\n"
                << "Enter Choice: ";
            std::cin >> choice;
        return choice;
};

int Addition() {
    int val1, val2, sum;
    std::cout << "Please input value 1:";
    std::cin >> val1;
    std::cout << "Please input value 2:";
    std::cin >> val2;
    std::cout << val1 << " + " << val2 << " = " << val1 + val2 << "\n";
    return val1 + val2;
};
int Subtraction() {
    int val1, val2 ;
    std::cout << "Please input value 1:";
    std::cin >> val1;
    std::cout << "Please input value 2:";
    std::cin >> val2;
    std::cout << val1 << " - " << val2 << " = " << val1 - val2 << "\n";
    return val1 + val2;
};
int Multiplication() {
    int val1, val2 ;
    std::cout << "Please input value 1:";
    std::cin >> val1;
    std::cout << "Please input value 2:";
    std::cin >> val2;
    std::cout << val1 << " * " << val2 << " = " << val1 * val2 << "\n";
    return val1 + val2;
};
int Division() {
    int val1, val2 ;
    std::cout << "Please input value 1:";
    std::cin >> val1;
    std::cout << "Please input value 2:";
    std::cin >> val2;
    std::cout << val1 << " / " << val2 << " = " << val1 / val2 << "\n";
    return val1 + val2;
};
