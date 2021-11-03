// DO NOT NEED THIS WHOLE FILE -->
// EVERYTHING IS IN .CPP

#ifndef LINKEDLIST_H
#define LINKEDLIST_H


#include <vector>
#include <iostream>
#include <fstream>  
#include<sstream>
#include<string>  

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
        LinkedList(T data){
            head = nullptr;
            size = 0;
        };
        int getSize() {return size; };
        void append(T data); // add at the end;
        void printLinkedListVenue();
        void printLinkedListUser();
        void printLinkedListActivity();
        void printLinkedListAttendance(); 
        
};

#include "LinkedList.cpp"
#endif