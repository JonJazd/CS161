#include <iostream>
#include "Ship.hpp"
#include "BBoard.hpp"
#include <string>
using std::string;
using std::cout;
using std::endl;

int main() {
    BBoard board;
    Ship ship1("Boaty McBoatface", 2);
    board.placeShip(&ship1, 2, 2, 'R');
    board.attack(2, 3);
    board.attack(2, 2);
    board.attack(2, 3);
}