#include <array>

#include "Deck.hpp"

int main(int argc, char* argv[]){
  array<Card, 5> cards{Card("Diamond", 11), Card("Diamond", 11), Card("Diamond", 11), Card("Diamond", 11), Card("Diamond", 11)};
  auto h = Hand(cards);
  cout << h << std::endl;
}