#include <iostream>
#include <algorithm>
using namespace std;

double findMedian(int array[],int);

int main(){
    int array1[7] = {7,5,2,3,1,4,6};
    double array1med = findMedian(array1,7);
    int array2[4] = {1,4,1,4};
    double array2med = findMedian(array2,4);
    cout << array1med << " " << array2med <<endl;
}
