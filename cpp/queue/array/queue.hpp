#include <iostream>
using namespace std;

#ifndef queue_h
#define queue_h


template <typename T>
class queue{
private:
  int size;
  int top=-1; 
  T* myQueue;
public:
  // stackArray(int size);
  queue(int size);
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