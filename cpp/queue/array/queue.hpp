#include <iostream>
using namespace std;

#ifndef queue_h
#define queue_h

// struct node{
  // int index;
  // node* next;  
// };


class queue{
private:
  int size, stack[size], top=-1, head=0;
public:
  // stackArray(int size);
  queue(int size);
  // Add Fuction
  bool push(int no);
  // Delete Element
  int pop(); // done
  // Print Element
  bool PrintList(); // done
  // get Length
  int getLength(); // done
};
#endif