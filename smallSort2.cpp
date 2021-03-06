/********************************************************************* 
** Author: Jonathan Jazdzewski
** Date:5/22/18
** Description:A program to sort 3 entered integers.
*********************************************************************/ 
#include <iostream>
using std::cout;
using std::cin;
using std::endl;

void smallSort2(int *x, int *y, int *z);

/*int main()
{
    int a ,b ,c;
    a = 3;
    b = 4;
    c = 5;
    smallSort2(&a, &b, &c);
    cout << a << ", " << b << ", " << c <<endl;
    return 0;
}*/

//functin to sort lowest to highest
void smallSort2(int *x, int *y, int *z)
{
  int val1, val2, val3;
  val1 = *x;
  val2 = *y;
  val3 = *z;

    if (*x > *y && *x > *z)
    {
        if (*y>*z){
            *x = val3;
            *y = val2;
            *z = val1;
        }
        else 
        {
            *x = val2;
            *y = val3;
            *z = val1;
        }
    }
    else if (*y > *x && *y > *z)
    {
        if (*x > *z)
        {
            *x = val3;
            *y = val1;
            *z = val2;
        }
        else 
        {
            *x = val1;
            *y = val3;
            *z = val2;
        }
    }
    else if (*z > *x && *z > *y)
    {
        if (*x > *y)
        {
            *x = val2;
            *y = val1;
            *z = val3;
        }
        else
        {
            *x = val1;
            *y = val2;
            *z = val3;
        }
    }
    else 
    {

    }
}
