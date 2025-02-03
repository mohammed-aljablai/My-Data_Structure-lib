#include <iostream>
using namespace std;

#ifndef Date_h
#define Date_h

struct node{
  int index;
  node* next;  
};


class singlelinkedlist{
private:
  node *head=NULL, *tail=NULL, *e;
public:
  // Make Element
  node* makeNode(int no, node* next); // done
  // Add Fuction
  bool addToFirst(int no); // done
  bool addToEnd(int no);  // done
  bool addToMid(int no, int index);  // done
  // Delete Element
  bool delFromFirst(); // done
  bool delFromMid(int index); // now
  bool delFromEnd(); // done
  // Print Element
  bool PrintList(); // done
  // get Length
  int getLength(); // done

  // Additional Methods
  bool orderElements();
  bool revert();
};
#endif