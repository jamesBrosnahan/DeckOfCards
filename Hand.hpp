#include <iostream>

class Hand{
  private:
  protected:
  public:
    friend ostream& operator<<(ostream& os, Hand& H){
      return os;
    }
};