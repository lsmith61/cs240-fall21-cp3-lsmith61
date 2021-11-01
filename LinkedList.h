#ifndef LINKEDLIST_H
#define LINKEDLIST_H
#include <string>
#include <vector>
#include <iostream>
#include <fstream>  
#include"Activity.h"

using namespace std;

template <typename T> 
class Node {
    private:

    public:
        T data; // data in this current node
        Node* next; // pointer to next node element 
        Node(T data) {this->data = data; this->next = nullptr; };   
        T getData() {return data; };   
};

template <typename T> 
class LinkedList {
    private:
        
        
    public:
        Node<T> *head;
        int size;
        LinkedList() {};
        // ~LinkedList() {}; // destructor 
        LinkedList(T data){this->head = nullptr; };
        int getSize() {return size; };
        void append(T); // add at the end;
        void printLinkedListVenue();
        void printLinkedListUser();
        void printLinkedListActivity();
        void printLinkedListAttendance(); 
};

//#include "LinkedList.cpp"
#endif