#include <iostream>
using namespace std;

#ifndef singlelinkedlist_h
#define singlelinkedlist_h

template <typename T>
class node{
public:
  T data;
  node<T>* next;  
};


template <typename T>
class singlelinkedlist{
private:
  node<T> *head;
  node<T> *tail;
  node<T> *e;
  int size;
public:
  singlelinkedlist();
  // ~singlelinkedlist();
  // Make Element
  node<T>* makeNode(T& value, node<T>* next); // done
  // Add Fuction
  bool addToFirst(T value); // done
  bool addToEnd(T value);  // done
  bool addToMid(int index, T value);  // done
  // Delete Element
  bool delFromFirst(); // done
  bool delFromMid(int index); // now
  bool delFromEnd(); // done
  // Print Element
  bool PrintList(); // done
  // Get elements
  // get Length
  int getLength(); // done
  // Additional Methods
  bool orderElements();
  bool revert();
};
#endif