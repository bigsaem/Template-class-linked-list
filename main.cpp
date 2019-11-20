#include <iostream>
#include "Node.hpp"
#include "MyLinkedList.hpp"
#include <string>


using namespace std;
template <typename T>
void printList (MyLinkedList<T>* list){
    Node<T>* head= list->getHead();

    while(head->getNext()!= nullptr){
        cout<<head->getData()<<" ";
        head = head->getNext();
    }
    cout<<head->getData()<< " ";
}
int main() {
    MyLinkedList<int>* intList = new MyLinkedList<int>();
    intList->pushBack(3);
    intList->pushFront(1);
    intList->insert(intList->getHead(), 2);

    MyLinkedList<string>* stringList = new MyLinkedList<string>();
    stringList->pushBack("c");
    stringList->pushFront("a");
    stringList->insert(stringList->getHead(), "b");

    printList(intList);
    printList(stringList);
    return 0;
}


