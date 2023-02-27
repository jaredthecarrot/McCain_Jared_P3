#include "McCain_Jared_P3.h"
#include <iostream>
#include <fstream>
using namespace std;

int main()
{   
    PriorityQueue queue;
    
    int x;
    cin >> x;
    switch (x){
        case 1:
        queue.selection_sort();
        break;
        default:
        cout << "Invalid input";
        break;
    }

    return 0;
}
    