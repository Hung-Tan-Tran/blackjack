//"deck.h" by Hung Tran


//  cardValue reference table
//  -------------------------
//
//  11 -> Jack
//  12 -> Queen
//  13 -> King
//  14 -> Ace

#ifndef DECK_H
#define DECK_H

#include <deque>

using std::deque;

enum Suit { SPADES, HEARTS, DIAMONDS, CLUBS };

struct Card
{
    Suit cardSuit;
    int cardValue;
};

class Deck
{
    public:
        //Constructors and Destructor
        Deck();
        Deck(const Deck & d);
        Deck(Deck && d);
        ~Deck();

        //Assignment Operators
        Deck& operator=(const Deck & d);
        Deck& operator=(Deck && d);

        //Accessors
        void displayCard(Card);
        void getSuit() const;
        void getValue() const;

        //Mutators
        void shuffle();
        

    private:
        deque<Card> myDeck;
};

#endif
