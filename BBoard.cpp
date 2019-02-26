/********************************************************************* 
** Author: Jonathan Jazdzewski
** Date:6/5/18
** Description:An object that represents a battleship board
*********************************************************************/ 

#include <iostream>
#include "Ship.hpp"
#include "BBoard.hpp"
#include <string>
using std::string;
using std::cout;
using std::endl;

bool board[10][10];
Ship *ships[10][10];
int unsunk;

BBoard::BBoard(){
    for (int a=0;a<10;a++){
        for (int b=0;b<10;b++){
            board[a][b]=0;
            ships[a][b]=nullptr;
        }
    }
    unsunk = 0;
}

bool BBoard::getAttacksArrayElement(int a, int b){
    return board[a][b];
}

Ship* BBoard::getShipsArrayElement(int c, int d){
    return ships[c][d];
}

int BBoard::getNumShipsRemaining(){
    return unsunk;
}

bool BBoard::placeShip(Ship* bship, int e, int f, char ch){
    bool check = 1;
    unsunk += 1;
    int bshipLength = (*bship).getLength();
    if (ch=='R'){
        for (int g=0;g<bshipLength;g++){
            if (ships[e][f+g] || (f+g)>10){
                check = 0;
            }
        }
        if (check){
            for (int h=0;h<bshipLength;h++){
                ships[e][h+f] = bship;
            }
        }
    }
    else if (ch=='C'){
        for (int g=0;g<bshipLength;g++){
            if (ships[e+g][f] || (g+e)>10){
                check = 0;
            }
        }
        if (check){
            for (int h=0;h<bshipLength;h++){
                ships[e+h][f] = bship;
            }
        }
    }
}

bool BBoard::attack(int i, int k){
    if (ships[i][k]!=nullptr && board[i][k]==0){
        board[i][k]=1;
        (*ships[i][k]).takeHit();
        int cShipDamage = (*ships[i][k]).getDamage();
        int cShipLength = (*ships[i][k]).getLength();
        string cShipName = (*ships[i][k]).getName();
        if (cShipDamage== cShipLength){
            cout << "They sank " << cShipName << "!" << endl;
            unsunk -= 1;
        }
        return true;
    }
    else if (ships[i][k]==nullptr){
        board[i][k] = 1;
    }
    else if (board[i][k]==1 && ships[i][k]!=nullptr){
        return true;
    }
}

bool BBoard::allShipsSunk(){
    if (unsunk==0){
        return true;
    }
    else {
        return false;
    }
}
