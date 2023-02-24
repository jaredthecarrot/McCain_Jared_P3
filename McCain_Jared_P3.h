#ifndef McCain_Jared_P3
#define McCain_Jared_P3

template <typename E>

class Node{
    public:
    
    E data;

    Node* next;

};

template<typename E>

class PriorityQueue{
    public:

    Node<E>* head;

    Node<E>* tail;

    int countS;

    PriorityQueue(){

    head = nullptr;

    tail = nullptr;
    }

void insert(E& e){
    
    Node<E>* node = new Node<E>;
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
void removeMin(){

    int currentminimum = head->data;
    for (Node<E>* node = head; node != nullptr; node = node->next){
    if (node->data < currentminimum)
        currentminimum = node->data;
    }
for (Node<E>*node = head; node != nullptr; node = node->next){
    if (node->data == currentminimum)
        node = node->next;
}
    countS--;
}
int min(){
    int currentminimum = head->data;
    for (Node<E>* node = head; node != nullptr; node = node->next){
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