#ifndef McCain_Jared_P3.h
#define McCain_Jared_P3.h

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
    public:
    void insert(E& e);
    void removeMin();
    void min();
    const int size();
    const bool empty();
};
#endif