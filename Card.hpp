#include <iostream>
#include <String>

using namespace std;

class Card{
  private:
    String suit;
    int value;
  protected:
  public:
    enum SUITS{h="hearts", s="spades", c="clubs", d="diamonds"};
    friend ostream& operator<<(ostream& os, Card& C){
      return os;
    }
};