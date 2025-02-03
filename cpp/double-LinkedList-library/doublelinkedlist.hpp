#include <iostream>
using namespace std;

#ifndef doublelinkedlist_h
#define doublelinkedlist_h

struct node{
  node* previous;
  float index;
  node* next;
};
class doublelinkedlist
{
private:
  node *head, *tail, *e;
public:
  doublelinkedlist(/* args */);
  ~doublelinkedlist();

  // make a new node
  node* makeNode(float index, node* next, node* previous);
  // Add elements
  bool addToFirst(float index);
  bool addToEnd(float index);
  bool addToMid(float index, float searchFor);
  // Del elements
  bool delFromFirst();
  bool delFromEnd();
  bool delFromMid(float index);
  // print the list
  bool PrintList();
  // length
  int getLength();

  // Additional methods
  bool spicalAdd(int index);
};

#endif