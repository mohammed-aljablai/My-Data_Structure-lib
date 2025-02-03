#include <iostream>
using namespace std;

#ifndef Date_h
#define Date_h

// struct node{
  // int index;
  // node* next;  
// };


template <typename T>
class stackArray{
private:
  int size, top=-1;
  T stack[size];
public:
  stackArray(int size);
  // Add Fuction
  bool push(T value);
  // Delete Element
  int pop(); // done
  // Print Element
  bool PrintList(); // done
  // get Length
  int getLength(); // done
};
#endif