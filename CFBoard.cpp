/********************************************************************* 
** Author: Jonathan Jazdzewski
** Date:5/28/18
** Description:An object that represents a connect 4 board.
*********************************************************************/ 
#include <iostream>
#include "CFBoard.hpp"
#include <string>
using std::string;
using std::endl;
using std::cout;

char board[7][6];
//checks the game board each turn to see if anyone won or if game board is full.
void CFBoard::updateGameState(int d, int e){
    //if board is full game is a draw, still checks if anyone won on the last move
    if (e==0 && board[0][0]!='e' && board[1][0]!='e' && board[2][0]!='e' && board[3][0]!='e' && board[4][0]!='e' && board[5][0]!='e' && board[6][0]!='e'){
        gameState1 = DRAW;
    }
    //cout << board[d][e] << " " << board[d-1][e] << endl;
    //if the piece below the placed piece is the same check if there are 4 in a row
    if (board[d][e]==board[d][e+1]){
        if (board[d][e]==board[d][e+2] && board[d][e]==board[d][e+3]){
            if (board[d][e]=='x'){
                gameState1 = X_WON;
            }
            else if (board[d][e]=='o'){
                gameState1 = O_WON;
            }
        }
    }
    //if the placed piece is the same as the left or right check if there are 4 in a row
    else if (board[d][e]==board[d+1][e] || board[d][e]==board[d-1][e]){
        //cout << d << "," << e << endl;
        if (board[d][e]==board[d+2][e] || board[d][e]==board[d-2][e]){
            if (board[d][e]==board[d+1][e] && board[d][e]==board[d-1][e]){
                if (board[d][e]=='x'){
                gameState1 = X_WON;
            }
            else if (board[d][e]=='o'){
                gameState1 = O_WON;
            }
            }
            else if (board[d][e]==board[d+3][e] || board[d][e]==board[d-3][e]){
                if (board[d][e]==board[d+3][e] && board[d][e]==board[d+2][e] && board[d][e]==board[d+1][e]){
                    if (board[d][e]=='x'){
                gameState1 = X_WON;
            }
            else if (board[d][e]=='o'){
                gameState1 = O_WON;
            }
                }
                else if (board[d][e]==board[d-3][e] && board[d][e]==board[d-2][e] && board[d][e]==board[d-1][e]){
                    if (board[d][e]=='x'){
                gameState1 = X_WON;
            }
            else if (board[d][e]=='o'){
                gameState1 = O_WON;
            }
                }
            }
        }
    }
    //check the lower right and upper left diagonal
    else if (board[d][e]==board[d+1][e+1] || board[d][e]==board[d-1][e-1]){
        cout << "at least two diagonals together" << endl;
        if (board[d][e]==board[d+2][e+2] || board[d][e]==board[d-2][e-2]){
            cout << "at least three diagonals together" << endl;
            if (board[d][e]==board[d+1][e+1] && board[d][e]==board[d-1][e-1]){
                if (board[d][e]=='x'){
                gameState1 = X_WON;
            }
            else if (board[d][e]=='o'){
                gameState1 = O_WON;
            }
            }
            else if (board[d][e]==board[d+3][e+3] || board[d][e]==board[d-3][e-3]){
                if (board[d][e]==board[d+3][e+3] && board[d][e]==board[d+2][e+2] && board[d][e]==board[d+1][e+1]){
                    if (board[d][e]=='x'){
                gameState1 = X_WON;
            }
                    else if (board[d][e]=='o'){
                gameState1 = O_WON;
            }
                }
                else if (board[d][e]==board[d-3][e-3] && board[d][e]==board[d-2][e-2] && board[d][e]==board[d-1][e-1]){
                    if (board[d][e]=='x'){
                gameState1 = X_WON;
            }
                    else if (board[d][e]=='o'){
                gameState1 = O_WON;
            }
                }
            }
        }
    }
    //check the upper right and lower left diagonal
    if (board[d][e]==board[d-1][e+1] || board[d][e]==board[d+1][e-1]){
        cout << "at least 2 diagonals together (2)" << endl;
        if (board[d][e]==board[d-2][e+2] || board[d][e]==board[d+2][e-2]){
            cout << "at least 3 diagonals together (2)" << endl;
            if (board[d][e]==board[d-1][e+1] && board[d][e]==board[d+1][e-1]){
                if (board[d][e]=='x'){
                gameState1 = X_WON;
            }
            else if (board[d][e]=='o'){
                gameState1 = O_WON;
            }
            }
            else if (board[d][e]==board[d-3][e+3] || board[d][e]==board[d+3][e-3]){
                if (board[d][e]==board[d-3][e+3] && board[d][e]==board[d-2][e+2] && board[d][e]==board[d-1][e+1]){
                    if (board[d][e]=='x'){
                gameState1 = X_WON;
            }
            else if (board[d][e]=='o'){
                gameState1 = O_WON;
            }
                }
                else if (board[d][e]==board[d+3][e-3] && board[d][e]==board[d+2][e-2] && board[d][e]==board[d+1][e-1]){
                    if (board[d][e]=='x'){
                gameState1 = X_WON;
            }
            else if (board[d][e]=='o'){
                gameState1 = O_WON;
            }
                }
            }
        }
    }
}

gameState CFBoard::getGameState(){
    return gameState1;
}

bool CFBoard::makeMove(int a,char b){
    for (int c=0;c<6;c++){
        if (board[a-1][c] !='e' && gameState1==3 && c!=0){
            cout << "makeMove 1" << endl;
            board[a-1][c-1] = b;
            updateGameState(a-1,c-1);
            break;
        } 
        else if (c==5 && board[a-1][5]=='e'){
            cout << "makeMove 5" << endl;
            board[a-1][5] = b;
            updateGameState(a-1,5);
            break;
        }
        else if (c==0 && board[a-1][c]!='e' || gameState1!=3) {
            return false;
        }
        else{}
    }
    return true;
}

void CFBoard::print(){
    cout << board[0][0]<< board[0][1]<< board[0][2]<< board[0][3]<< board[0][4]<< board[0][5]<< endl;
    cout << board[1][0]<< board[1][1]<< board[1][2]<< board[1][3]<< board[1][4]<< board[1][5]<< endl;
    cout << board[2][0]<< board[2][1]<< board[2][2]<< board[2][3]<< board[2][4]<< board[2][5]<< endl;
    cout << board[3][0]<< board[3][1]<< board[3][2]<< board[3][3]<< board[3][4]<< board[3][5]<< endl;
    cout << board[4][0]<< board[4][1]<< board[4][2]<< board[4][3]<< board[4][4]<< board[4][5]<< endl;
    cout << board[5][0]<< board[5][1]<< board[5][2]<< board[5][3]<< board[5][4]<< board[5][5]<< endl;
    cout << board[6][0]<< board[6][1]<< board[6][2]<< board[6][3]<< board[6][4]<< board[6][5]<< endl;
}

CFBoard::CFBoard(){
    for (int a = 0; a<7; a++){
        for (int b = 0; b<6;b++){
            board[a][b]='e';
        }
    }
    gameState1 = UNFINISHED;
}