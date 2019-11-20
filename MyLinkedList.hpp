//
// Created by Sammy on 2019-11-19.
//

#ifndef LAB8_LINKEDLIST_HPP
#define LAB8_LINKEDLIST_HPP


template <class T> class MyLinkedList {
    Node<T>* head;

public:
    MyLinkedList(){};
    MyLinkedList(Node<T>* head):head(head){};
    void pushFront(T data){
        head = new Node<T>(data, head);
    }
    void pushBack(T data){
        if(head == nullptr){
            head = new Node<T>(data);
        } else{
            Node<T>* temp = head;
            while(temp->getNext() != nullptr){
                temp = temp->getNext();
            }
            temp->setNext(new Node<T>(data));
        }
    }
    void insert(Node<T>* prevNode, T data){
        Node<T>* next = prevNode->getNext();
        prevNode->setNext(new Node<T>(data, next));
    }
    Node<T>* getHead(){return head;};
};


#endif //LAB8_LINKEDLIST_HPP
