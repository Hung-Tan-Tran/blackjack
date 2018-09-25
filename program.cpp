#include <iostream>
#include <iomanip>
#include "deck.h"

using std::cout;
using std::endl;

void menuPrompt();

int main()
{
    //Declarations
    int input;

    Deck myDeck();

    //Title
    std::cout << "\nBlackjack: C++ Edition!\n";
    std::cout << std::setw(12) << "by\n";
    std::cout << std::setw(16) << "Hung Tran\n";
    std::cout << "-----------------------\n\n\n";

    menuPrompt();

    do
    {
        if(input == 1)
            menuPrompt();
        
            std::cout << "> ";
            std::cin >> input;

    }
    while(input != 0);

    std::cout << "\nBye...\n";

    return 0;
}

void menuPrompt()
{
    std::cout << "\n  1 - Show menu\n";
    std::cout << "  2 - Play a round\n";
    std::cout << "\n  0 - To Exit\n\n";

}