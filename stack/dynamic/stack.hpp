#include <iostream>
using namespace std;

#ifndef Date_h
#define Date_h

struct node{
  int index;
  node* next;  
};


class stack{
private:
  node *head=NULL, *e;
public:
  // Make Element
  node* makeNode(int no, node* next); // done
  // Add Fuction
  bool push(int no);  // done
  // Delete Element
  bool pop(); // done
  // Print Element
  bool PrintList(); // done
  // get Length
  int getLength(); // done
};
#endif