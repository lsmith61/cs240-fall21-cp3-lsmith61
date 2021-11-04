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
    Node<T>* current = head;
    if(current == nullptr){
        // cout << "returning false" << endl << data << endl;
        return false;
    }
        // finding the last node of the linkedlist, current is last node
    while(current != nullptr){
        // cout << current->getData() << endl;
        if(current->getData() == data){
            return true;
        }
        current = current->next;
    }
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
            current = current->next;
        }
        current->next = newNode;
    
        current->next->next = nullptr;
    }
     size ++;
} 

/*
template <typename T>
bool LinkedList<T>::compareTo(string venueNameComp, Node<T> *traverse) {
    if(head == nullptr) {
        cout << "list is empty. nothing to compare" << endl;
    }
    while(traverse != NULL) {
        cout << venueNameComp << " ";
        cout << traverse->data.getVenueName() << endl;
        if(venueNameComp == traverse->data.getVenueName()){
            // return true if the file is already in there
            return false;
        }
        traverse = traverse->next;
        // return false if the file is NOT already used
    }
    // return false if the file is NOT already used
    return true;   
}
*/
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
        outfile << "temp data string (Line 112 LL)" << endl;
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



