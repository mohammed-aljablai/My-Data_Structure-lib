#include <iostream>
using namespace std;

#ifndef Date_h
#define Date_h

// struct node{
  // int index;
  // node* next;  
// };


class stackArray{
private:
  int size, stack[size], top=-1;
public:
  stackArray(int size);
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