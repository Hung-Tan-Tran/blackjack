//"deck.cpp"

#include "deck.h"
#include <iostream>

using std::cout;
using std::endl;

Deck::Deck()
{
    for(int i = 0; i < 4; i++)
        for(int j = 0; j < 13; j++)
        {
            Card currentCard;
            currentCard.cardSuit = static_cast<Suit>(i);
            currentCard.cardValue = j;
            myDeck.push_back(currentCard);
        }
}


void Deck::displayCard(Card card)
{
    switch(static_cast<int>(card.cardSuit))
    {
        case '0':
            cout << "SPADES";
            break;
        case '1':
            cout << "HEARTS";
            break;
        case '2':
            cout << "DIAMONDS";
            break;
        case '3':
            cout << "CLUBS";
            break;
    }
}

void Deck::shuffle()
{

}