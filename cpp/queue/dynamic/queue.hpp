#include "../../Single-LinkedList-library/singlelinkedlist.cpp"
using namespace std;

#ifndef queue_h
#define queue_h


template <typename T>
class queue{
private:
  singlelinkedlist<T> myQueue;
public:
  // Add Fuction
  bool enqueue(T value);  // done
  // Delete Element
  bool disEnqueue(); // done
  // Print Element
  bool PrintList(); // done
  // get Length
  int getLength(); // done
  // Additional methods
  // split queue
  // queue sliceQ(int index);
  // bool delPrimaryNo();
};
#endif