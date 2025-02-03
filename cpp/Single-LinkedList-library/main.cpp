#include <iostream>
#include "singlelinkedlist.cpp"
using namespace std;

int main(){
  singlelinkedlist<double> array;
  // Add elements to the First
  array.addToFirst(0);
  array.addToFirst(-1);
  array.addToFirst(-2);
  array.addToEnd(1);
  array.PrintList();
  cout << "---------------------------" <<endl;

  // Add elements to the First
  array.addToMid(1, 1.5);
  array.PrintList();
  array.addToMid(2 , 100);
  array.PrintList();
  // get length Of array
  cout << "The array length "<< array.getLength() <<endl;
  cout << "---------------------------" <<endl;

  array.delFromEnd();
  array.delFromFirst();
  array.delFromMid(2);
  array.PrintList();
  cout << "The array length "<< array.getLength() <<endl;
  cout << "---------------------------" <<endl;
}