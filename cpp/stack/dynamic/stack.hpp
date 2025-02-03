#include "../../Single-LinkedList-library/singlelinkedlist.cpp"
using namespace std;

#ifndef Date_h
#define Date_h



template <typename T>
class stack{
private:
  singlelinkedlist<T> myStack;
public:
  // Add Fuction
  bool push(T value);  // done
  // Delete Element
  bool pop(); // done
  // Print Element
  bool PrintList(); // done
  // get Length
  int getLength(); // done
  // Additionals methods
  // delete repeated no
  // bool delRepeated();
};
#endif