#include <iostream>
#include <array>

#include "Card.hpp"

using namespace std;

class Hand{
  private:
    array<Card, 5> cards;
  protected:
  public:
    Hand(array<Card, 5> cards_): cards(cards_){}
    friend ostream& operator<<(ostream& os, Hand& H){
      for(auto &card : H.cards){
        os << card << endl;
      }
      return os;
    }
};