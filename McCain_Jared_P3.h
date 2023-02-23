#ifndef McCain_Jared_P3.h
#define McCain_Jared_P3.h
#include <fstream>

template <typename E>

class Node {
    public:
    
    E data;

    Node* next;

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

    int min();

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
    Node* node = new Node();
    node = head->data;
    node->next = nullptr;
    if (empty()){
        head = node;
        tail = node;
    }
    else {
        tail->next = node;
        tail = node;
    }
}

template<typename E>

void PriorityQueue<E>::removeMin(){
    currentminimum = int min();
for (Node* node = head; node != nullptr; node = node->next){
    if (node->data == currentminimum)
        node = node->next;
}
}
template<typename E>

int PriorityQueue<E>::min(){
    int currentminimum = head->data;
    for (Node* node = head; node != nullptr; node = node->next){
    if (node->data < currentminimum)
        currentminimum = node->data;
    }
    return currentminimum;
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