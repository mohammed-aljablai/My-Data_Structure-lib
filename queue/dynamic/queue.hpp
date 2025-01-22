#include <iostream>
using namespace std;

#ifndef queue_h
#define queue_h

struct node{
  int index;
  node* next;  
};


class queue{
private:
  node *head=NULL, *e, *tail;
public:
  // Make Element
  node* makeNode(int no, node* next); // done
  // Add Fuction
  bool enqueue(int no);  // done
  // Delete Element
  bool disEnqueue(); // done
  // Print Element
  bool PrintList(); // done
  // get Length
  int getLength(); // done
  // Additional methods
  // split queue
  queue sliceQ(int index);
  bool delPrimaryNo();
};
#endif