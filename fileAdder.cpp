/********************************************************************* 
** Author: Jonathan Jazdzewski
** Date:4/16/18
** Description:A program that opens a file and adds the numbers in the file together then outputs the sum as sum.txt
*********************************************************************/ 
#include <iostream>
#include <fstream>
#include <string>
using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::ifstream;
using std::ofstream;

int main()
{
    string file;
    double sum;
    int value;
    cout << "Please enter your filename." <<endl;
    cin >> file;
    //set "num" as the file and open file from user input.
    ifstream num;
    num.open(file);
    if (num)
    {
        //add to "sum" while there is a value to read.
        while (num >> value){
            sum += value;
        }
        num.close();
        ofstream sumFile;

        //write sum to new file sum.txt
        sumFile.open("sum.txt");
        sumFile << sum;
        sumFile.close();
        cout << "result written to sum.txt" << endl;
    }
    else
    {
        //error code if no file found
        cout << "could not access file" << endl;
    }
    return 0;
}