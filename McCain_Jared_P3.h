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

void insert(long e){
    
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
    ios::app;
    PriorityQueue queue;
    int size;
    iFile >> size;
    cout << "Grabbing size of text file..." << endl;
    int number;
    cout << "Entering text file data into priority queue..." << endl;
    while (iFile >> number){
        queue.insert(number);
    }
    cout << "Sorting data..." << endl;
    while (!queue.empty()){
        oFile << queue.removeMin() << endl;
    }
    cout << "Data sorted and outputted to output.txt" << endl;
    iFile.close();
    oFile.close();
}

void insertion_sort(){
    ifstream iFile;
    ofstream oFile;
    
    iFile.open("numbers.txt");
    oFile.open("output.txt");
    ios::app;
    PriorityQueue queue;
    int size;
    iFile >> size;
    cout << "Grabbing size of text file..." << endl;
    int array[size], number, i = 0;
    cout << "Entering text file data into array..." << endl;
    while (iFile >> number){
        array[i] = number;
        i++;
    }

    int min;
    
    cout << "Sorting data..." << endl;
    for (i = 1; i < size; i++){
        min = array[i];
        int j = i - 1;
        while (j >= 0 && array[j] > min){
            array[j + 1] = array[j];
            j--;
        }
        array[j + 1] = min;
    }
    
    cout << "Entering sorted data into priority queue..." << endl;

    for (i = 0; i < size; i++){
        queue.insert(array[i]);
    }


    while (!queue.empty()){
        oFile << queue.removeMin() << endl;
    }

    cout << "Data sorted and outputted to output.txt" << endl;

    iFile.close();
    oFile.close();
}
};

void bubble_sort(){
    ifstream iFile;
    ofstream oFile;
    iFile.open("numbers.txt");
    oFile.open("output.txt");
    ios::app;
    int size;
    iFile >> size;
    cout << "Grabbing size of text file..." << endl;
    int number;
    int array[size];
    int i = 0, j = 0;
    cout << "Entering text file data into array..." << endl;
    while (iFile >> number){
        array[i] = number;
        //cout << array[i] << endl;
        i++;
    }

    cout << "Sorting data..." << endl;
    for (i = 0; i < size; i++){
        for (j = 0; j < size - 1; j++){
            if (array[j] > array[j + 1]){
                int temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }

    for (i = 0; i < size; i++){
        oFile << array[i] << endl;
    }
    
    cout << "Data sorted and outputted to output.txt" << endl;

    iFile.close();
    oFile.close();
}

#endif