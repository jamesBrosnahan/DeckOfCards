#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>

#include "Card.hpp"

using namespace std;

class Hand{
  private:
    vector<Card> cards;
  protected:
  public:
    Hand(){
      cards.resize(5);
      generate_n(cards.begin(),cards.size(), [&](){return Card();});
    }
    Hand(const size_t s){
      cards.resize(s);
      generate_n(cards.begin(),cards.size(), [&](){return Card();});
    }
    Hand(vector<Card> cards_): cards(cards_){}
    friend ostream& operator<<(ostream& os, Hand& H){
      for(auto &card : H.cards){
        os << card << endl;
      }
      return os;
    }
};