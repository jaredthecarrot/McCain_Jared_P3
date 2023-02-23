#include "McCain_Jared_P3.h"
#include <iostream>

int main(int c, char* argv[])
{
    std::cout << "Hello World!" << std::endl;

    PriorityQueue<int> queue;

    for (int i = 0; i < 25000; i++)
    {
        queue.insert(i);
    }
    return 0;
}