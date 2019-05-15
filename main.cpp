#include <array>
#include <map>
#include <string>
#include <random>

#include "Deck.hpp"

using namespace std;

int main(int argc, char* argv[]){
  array<string, 4> suits;
  suits[0] = "Diamonds";
  suits[1] = "Hearts";
  suits[2] = "Clubs";
  suits[3] = "Spades";
  
  random_device rd;
  mt19937 gen(rd());
  uniform_int_distribution<> dist(1,13);
  
  array<Card, 5> cards;
  for(auto &c : cards ){
    c = Card(suits[dist(gen)%4], dist(gen));
  }
  
  auto h = Hand(cards);
  cout << h << std::endl;
}