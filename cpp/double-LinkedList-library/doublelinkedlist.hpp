#include <iostream>
using namespace std;

#ifndef doublelinkedlist_h
#define doublelinkedlist_h

template <typename T>
class  node{
public:
  node<T>* previous;
  T data;
  node<T>* next;
};

template <typename T>
class doublelinkedlist{
private:
  node<T> *head;
  node<T> *tail;
  node<T> *e;
  int size;
public:
  doublelinkedlist(/* args */);
  ~doublelinkedlist();

  // make a new node
  node<T>* makeNode(T& value, node<T>* next, node<T>* previous);
  // Add elements
  bool addToFirst(T value);
  bool addToEnd(T value);
  bool addToMid(int index, T value);
  // Del elements
  bool delFromFirst();
  bool delFromEnd();
  bool delFromMid(int index);
  // print the list
  bool PrintList();
  // length
  int getLength();

  // Additional methods
  bool spicalAdd(int index);
};

#endif