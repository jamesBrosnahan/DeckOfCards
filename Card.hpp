#include <iostream>
#include <string>

using namespace std;

class Card{
  private:
    string suit;
    int value;
  protected:
  public:
    //enum SUITS{h="hearts", s="spades", c="clubs", d="diamonds"};
    Card(){
      
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