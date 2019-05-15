#include <iostream>

#include "Hand.hpp"

using namespace std;

class Deck{
  private:
    array<Card*, 52> cards;
    array<Card, 13> diamonds;
    array<Card, 13> hearts;
    array<Card, 13> spades;
    array<Card, 13> clubs;
  protected:
  public:
    Deck(){
      diamonds = {};
      hearts = {};
      spades = {};
      clubs = {};
    }
};