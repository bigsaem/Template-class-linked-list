//
// Created by Sammy on 2019-11-19.
//

#ifndef LAB8_NODE_HPP
#define LAB8_NODE_HPP

template <class T> class Node {
private:
    Node* next;
    T data;
public:
    Node(){};
    Node(T data):data(data){};
    Node(T data, Node* next):data(data), next(next){};
    void setData(T data){this->data = data;};
    void setNext(Node* next){this->next = next;};
    T getData(){return data;};
    Node* getNext(){return next;};
};


#endif //LAB8_NODE_HPP
