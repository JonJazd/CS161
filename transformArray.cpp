/********************************************************************* 
** Author: Jonathan Jazdzewski
** Date:5/22/18
** Description:A program to transform an array into a different array
*********************************************************************/ 
#include <iostream>
using std::cout;
using std::cin;
using std::endl;

//prototype
void transformArray(int* & a, int length);

//function to take an array and transform it into an array twice as long with the extra ints being the previous ints +1
void transformArray(int* & a, int length){
    int* b = new int[length*2];
    for (int i=0;i<length*2;i++){
        if (i< length){
            b[i] = *(a+i);
        }
        else {
            b[i]= *(a+(i-length))+1;
        }
    }
    delete []a;
    a = b;
}