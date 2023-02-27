#include "McCain_Jared_P3.h"
#include <iostream>
#include <fstream>
#include <cstdlib>
using namespace std;

int main()
{   
    PriorityQueue queue;
    fstream file;
    file.open("numbers.txt");
    ios::app;
    srand(time(NULL));
    int y = rand() % 25000 + 1;
    file << y << endl;
    for (int i = 0; i < y; i++)
    {   
        int num = rand();
        file << num << endl;
    }
    file.close();

    int x;

    cout << "1. Selection Sort" << endl;

    cout << "2. Insertion Sort" << endl;

    cout << "3. Bubble Sort" << endl;

    cin >> x;

    switch (x){
        case 1:
        queue.selection_sort();
        break;
        /*case 2:
        queue.insertion_sort();
        break;*/
        case 3:
        bubble_sort();
        break;
        default:
        cout << "Invalid input";
        break;
    }

    return 0;
}
    