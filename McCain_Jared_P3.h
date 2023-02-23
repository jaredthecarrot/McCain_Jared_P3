#ifndef McCain_Jared_P3
#define McCain_Jared_P3
#include <fstream>



class Node<E> template <class E>{
    public:
    
    E data;

    Node* next;

};

template<class E>

class PriorityQueue<E>{
    public:

    Node<E>* head;

    Node<E>* tail;

    int countS;

    PriorityQueue();
    
    bool empty() const;

    void insert(E& e);

    void removeMin();

    int min();

    int size() const;

    template<typename E>

    PriorityQueue(){

    head = nullptr;

    tail = nullptr;
    }

void insert(E& e){
    Node* node = new Node();
    node = e;
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
void removeMin(){
    int currentminimum = int min();
for (Node* node = head; node != nullptr; node = node->next){
    if (node->data == currentminimum)
        node = node->next;
}
    countS--;
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

};


#endif