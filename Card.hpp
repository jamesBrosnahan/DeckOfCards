#include <iostream>
#include <string>
#include <array>
#include <random>

using namespace std;

const array<string, 4> suits{{"Diamonds", "Hearts", "Clubs", "Spades"}};
random_device rd;
mt19937 gen(rd());
uniform_int_distribution<> dist(2,13);

class Card{
  private:
    string suit;
    int value;
  protected:
  public:
    
    Card(){
      suit = suits[dist(gen)%4];
      value = dist(gen);
    }
    Card(string suit_, int value_) : suit(suit_), value(value_){}
    string getSuit(){ return suit;}
    int getValue(){ return value;}
    friend ostream& operator<<(ostream& os, Card& c){
      string name;
      switch(c.value){
        case 11:
          os << "Jack";
          break;
        case 12:
          os << "Queen";
          break;
        case 13:
          os << "King";
          break;
        case 14:
          os << "Ace";
          break;
        default:
          os << c.value;
      }
       os << " of " << c.suit;
      return os;
    }
};