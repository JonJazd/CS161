#include <iostream>
#include "CFBoard.hpp"
#include <string>
using std::string;
using namespace std;

int main(){
    /*CFBoard board1;
    board1.makeMove(1,'x');
    board1.makeMove(2,'x');
    board1.makeMove(4,'x');
    board1.makeMove(3,'x');
    cout << "board 1" << endl;
    cout << board1.getGameState(board1) << endl;*/
    /*CFBoard board3;
    board3.makeMove(1,'x');
    board3.makeMove(1,'x');
    board3.makeMove(1,'x');
    board3.print(board3);
    board3.makeMove(1,'x');
    board3.print(board3);
    cout << board3.getGameState(board3) << endl;*/
    CFBoard board2;
    board2.makeMove(1,'o');
    board2.makeMove(1,'o');
    board2.makeMove(1,'o');
    board2.makeMove(1,'x');
    board2.makeMove(1,'x');
    board2.makeMove(1,'x');
    board2.makeMove(2,'x');
    board2.makeMove(2,'x');
    board2.makeMove(2,'x');
    board2.makeMove(2,'o');
    board2.makeMove(2,'o');
    board2.makeMove(2,'o');
    board2.makeMove(3,'o');
    board2.makeMove(3,'o');
    board2.makeMove(3,'o');
    board2.makeMove(3,'x');
    board2.makeMove(3,'x');
    board2.makeMove(3,'x');
    board2.makeMove(4,'x');
    board2.makeMove(4,'x');
    board2.makeMove(4,'x');
    board2.makeMove(4,'o');
    board2.makeMove(4,'o');
    board2.makeMove(4,'o');
    board2.makeMove(5,'o');
    board2.makeMove(5,'o');
    board2.makeMove(5,'o');
    board2.makeMove(5,'x');
    board2.makeMove(5,'x');
    board2.makeMove(5,'x');
    board2.makeMove(6,'x');
    board2.makeMove(6,'x');
    board2.makeMove(6,'x');
    board2.makeMove(6,'o');
    board2.makeMove(6,'o');
    board2.makeMove(6,'o');
    board2.makeMove(7,'o');
    board2.makeMove(7,'o');
    board2.makeMove(7,'o');
    board2.makeMove(7,'x');
    board2.makeMove(7,'x');
    board2.makeMove(7,'x');
    cout << board2.getGameState() << endl;
    /*board2.makeMove(2,'o');
    board2.makeMove(2,'o');
    cout << board2.getGameState() << endl;
    board2.makeMove(4,'x');
    board2.makeMove(3,'o');
    cout << board2.getGameState() << endl;
    board2.makeMove(3,'x');
    board2.makeMove(2,'x');
    cout << "board 2, 2" << endl;
    cout << board2.getGameState() << endl;
    board2.makeMove(5,'o');
    board2.makeMove(5,'o');
    cout << "board 2, 3" << endl;
    cout << board2.getGameState() << endl;
    board2.makeMove(5,'o');
    cout << "board 2, 4" << endl;
    cout << board2.getGameState() << endl;
    board2.makeMove(5,'x');
    cout << "board 2, 5" << endl;
    board2.makeMove(2,'o');
    board2.makeMove(2,'o');
    cout << board2.getGameState() << endl;*/
    board2.print();
  
    return 0;
}