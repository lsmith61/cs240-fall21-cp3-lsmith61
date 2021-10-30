#include"LinkedList.h"
#include"Activity.h"
#include<iostream>
#include<sstream>
#include<string>
#include <iostream>
#include <fstream>  

using namespace std;

template <typename T>
void LinkedList<T>::append(T data) {
    // make the node
    Node<T>* newNode = new Node<T>(data); 
    // check if there is a list or first node
    if(head == nullptr) {
        head = newNode;
        head->next = nullptr;
        size ++;
    }
    else{
        Node<T>* current = head;
        // finding the last node of the linkedlist, current is last node
        while(current->next != nullptr){
            current = current->next;
        }
        // current becomes 2nd to last node, last node is newNode
        current->next = newNode;
        // marks the new end of the linked list
        newNode->next = nullptr;
    }
} 

// prob do this in main
template <typename T>
void LinkedList<T>::printLinkedListVenue(){
    // create a txt file
    //ofstream outfile ("VenueFinal.txt");
    //outfile << "Testing venue final text" << endl;
    //outfile.close();

    // iterate through the list 
    // print out to the txt file
    // make a of stream
}



