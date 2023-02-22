#ifndef McCain_Jared_P3.h
#define McCain_Jared_P3.h
#include <fstream>

template <typename E>

class Node {
    public:
    
    E data;

    Node* next;

    Node* prev;
};

template<typename E>
class PriorityQueue{
    private:

    Node* head;

    Node* tail;

    int countS;

    public:

    PriorityQueue();

    void insert(E& e);

    void removeMin();

    void min();

    int size() const;

    bool empty() const;

};

template<typename E>

PriorityQueue<E>::PriorityQueue(){
    head = nullptr;

    tail = nullptr;
}

template<typename E>

void PriorityQueue<E>::insert(E& e){
//INCOMPLETE NEEDS TO INSERT INTO FILE
}

template<typename E>

void PriorityQueue<E>::removeMin(){
//INCOMPLETE MAY NOT NEED
}

template<typename E>

void PriorityQueue<E>::min(){
//INCOMPLETE
}

template<typename E>

int PriorityQueue<E>::size() const {
    return countS;
}

template<typename E>

bool PriorityQueue<E>::empty() const {
    return (head == nullptr);
}
#endif