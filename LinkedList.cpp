#include <vector>
#include <iostream>
#include <fstream>  
#include<sstream>
#include<string>  

using namespace std;

//old header part
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
        Node<T> *tail;
        int size;
        LinkedList() {};
        // ~LinkedList() {}; // destructor 
        LinkedList(T data){
            head = nullptr;
            size = 0;
        };
        int getSize() {return size; };
        Node<T> getHead() {return *head; };
        void append(T data); // add at the end;
       // bool compareTo(string venueNameComp, Node<T> *traverse);
        void outputLinkedList(string fileName);
        bool find(T data);
        void print();

        
};
//end of old header

//implementations

template <typename T>
bool LinkedList<T>::find(T data) {
    cout << data;
    Node<T>* current = head;
    if(current == nullptr){
        //cout << "returning false 1" << endl << data << endl;
        return false;
    }
        // finding the last node of the linkedlist, current is last node
    while(current != nullptr){
        if(current->getData() == data){
            //cout << current->getData() << " and " << data << "\n" << endl;
            return true;
        }
        current = current->next;
    }
    //cout << "returning false 2" << endl;
    return false;
}


template <typename T>
void LinkedList<T>::append(T data) {
    // make the node
    Node<T>* newNode = new Node<T>(data); 
    // check if there is a list or first node
    if(head == nullptr) {
        head = newNode;
        head->next = nullptr;
    }
    else{
        Node<T>* current = head;
        while(current->next != NULL){
            //cout << current->next->getData() << endl;
            current = current->next;
        }
        current->next = newNode;
    
        current->next->next = nullptr;
    }
     size ++;
} 

template <typename T>
void LinkedList<T>::print(){
     Node<T>* current = head;
     while(current != NULL){
         cout << current->getData();
         current = current->next; 
     }
}

template <typename T>
void LinkedList<T>::outputLinkedList(string fileName){
     ofstream outfile (fileName);
     Node<T>* traverse;
     traverse = head;
     while(traverse != nullptr) {
         // insertion overloaded should be operated
        outfile << traverse->data << endl; 
        // go to next node
        traverse = traverse->next;
     }   
    outfile.close();
} 



// prob call this in main
/*
template <typename T>
void LinkedList<T>::printLinkedListVenue(Node<T> *traverse){
    // create a txt file
    ofstream outfile ("VenueOut.txt");
    // iterate through the list 
    if(head == nullptr) {
        cout << "list is empty" << endl;
    }
    while(traverse != NULL) {
        // function below calls compareTo, checks that the venue name has not been used if so it continues
        if(compareTo(traverse->data.getVenueName(), traverse)){
            // writes to outfile 
            outfile << traverse->data.getVenueName() + " " << 
            traverse->data.getCapacity() << " " << 
            traverse->data.getLocation() << endl;         
        }
        else{ 
            // write to outfile ignore
           outfile << "IGNORE --> This venue has already been used" << endl;
        }
         // go to next node 
        traverse = traverse->next;
    }
    // print out to the txt file
    outfile.close();
    // make a of stream
}
*/



