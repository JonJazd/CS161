/********************************************************************* 
** Author: Jonathan Jazdzewski
** Date:5/28/18
** Description:An object that represents a connect 4 board.
*********************************************************************/ 
#ifndef CFBoard_HPP
#define CFBoard_HPP
#include <string>
using std::string;

enum gameState {X_WON,O_WON,DRAW,UNFINISHED};
class CFBoard{
    private:
    gameState gameState1;
    public:
    char board[7][6];
    bool makeMove(int,char);
    void updateGameState(int,int);
    gameState getGameState();
    void print();
    CFBoard();
};
#endif