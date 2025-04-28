#include <iostream>
#include <random>
#include <iomanip>
using namespace std;

int makearray(int[]);
void bubble(int[], int);
void printout(int[], int);
const int SIZE = 100;

int makearray(int number[])
{
    random_device rd;
    int size = rd() % 5 + 5; 
    for(int i=0;i<size;i++)
        number[i] = rd() % 100;
    return size;
}
void bubble(int number[], int last)
{
    for(int i=0; i<last -1 ; i++) {
        if (number[i] > number[i+1])
            swap(number[i], number[i+1]);
    }
}
void printout(int number[], int last)
{
    for(int i=0;i<last;i++)
        cout << number[i] << "\t";
    cout << endl;
}
