#ifndef McCain_Jared_P3
#define McCain_Jared_P3
#include <fstream>
#include <iostream>
using namespace std;

class Node{
    public:
    
    int data;

    Node* next;

};

class PriorityQueue{
    public:

    Node* head;

    Node* tail;

    int countS;

    PriorityQueue(){

    head = nullptr;

    tail = nullptr;

    countS = 0;
    }

void insert(int e){
    
    Node* node = new Node();
    node->data = e;

    node->next = nullptr;

    if (empty()){
        head = node;
        tail = node;
    }
    else {
        tail->next = node;
        tail = node;
    }
    countS++;
}
int removeMin(){
    int currentminimum = head->data;
    for (Node* node = head; node != nullptr; node = node->next){
    if (node->data < currentminimum)
        currentminimum = node->data;
    }
    Node* current = head;
    Node* previous = nullptr;
    while (current->data != currentminimum){
        previous = current;
        current = current->next;
    }
    if (previous == nullptr){
        head = current->next;
    }
    else {
        previous->next = current->next;
    }
    if (current == tail){
        tail = previous;
    }

    countS--;
    return current->data;
}
int min(){
    int currentminimum = head->data;
    for (Node* node = head; node != nullptr; node = node->next){
    if (node->data < currentminimum)
        currentminimum = node->data;
    }
    return currentminimum;
}

int size() const {
    return countS;
}

bool empty() const {
    return (head == nullptr);
}

void selection_sort(){
    ifstream iFile;
    ofstream oFile;
    iFile.open("numbers.txt");
    oFile.open("output.txt");
    PriorityQueue queue;
    int size;
    iFile >> size;
    int number;
    while (iFile >> number){
        queue.insert(number);
    }
    while (!queue.empty()){
        oFile << queue.removeMin() << endl;
    }
    iFile.close();
    oFile.close();
}

void insertion_sort(){
    ifstream iFile;
    ofstream oFile;
    iFile.open("numbers.txt");
    oFile.open("output.txt");
    PriorityQueue queue;
    int size;
    iFile >> size;
    int number;
    while (iFile >> number){
        if ()
        queue.insert(number);
    }

}
};


#endif