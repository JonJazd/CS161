/********************************************************************* 
** Author: Jonathan Jazdzewski
** Date:6/5/18
** Description:An object that represents a battleship board
*********************************************************************/ 
#ifndef BBoard_HPP
#define BBoard_HPP
#include "Ship.hpp"

class BBoard{
    private:
    bool board[10][10];
    Ship *ships[10][10];
    int unsunk;
    public:
    BBoard();
    bool getAttacksArrayElement(int,int);
    Ship* getShipsArrayElement(int,int);
    int getNumShipsRemaining();
    bool placeShip(Ship*,int,int,char);
    bool attack(int,int);
    bool allShipsSunk();
};

#endif