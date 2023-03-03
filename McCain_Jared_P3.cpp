#include "McCain_Jared_P3.h"
#include <iostream>
#include <fstream>
#include <cstdlib>
using namespace std;

int main(int c, char* argv[])
{   
    PriorityQueue queue;
    fstream file;
    file.open("numbers.txt");
    ios::app;

    //Will randomly generate a list of numbers and put them in numbers.txt
    srand(time(NULL));
    long y = rand() % 25000 + 1;
    file << y << endl;
    for (int i = 0; i < y; i++)
    {   
        long num = rand();
        file << num << endl;
    }
    file.close();

    int x;

    x = atoi(argv[1]);

    switch (x){
        case 1:
        queue.selection_sort();
        break;
        case 2:
        queue.insertion_sort();
        break;
        case 3:
        bubble_sort();
        break;
        default:
        cout << "Invalid input for command line argument\n";
        cout << "Enter 1 for selection sort, 2 for insertion sort, or 3 for bubble sort in command line argument\n";
        break;
    }

    return 0;
}
