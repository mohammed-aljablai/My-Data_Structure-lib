#include <iostream>
#include "stack.cpp"
using namespace std;

int main(){
  singlelinkedlist array;
  // cout << array;
  // cout << "hello world";
  // add elements to the end
  array.addToEnd(1);
  array.addToEnd(2);
  array.addToEnd(3);
  // array.PrintList();
  
  // Add elements to the First
  array.addToFirst(0);
  array.addToFirst(-1);
  array.addToFirst(-2);
  // array.PrintList();

  // Add elements to the First
  array.addToMid(2.5, 2);
  array.addToMid(1.5, 1);
  array.addToMid(-1.5 , -2);
  array.PrintList();
  // get length Of array
  cout << "The array length "<< array.getLength() <<endl;

  array.delFromEnd();
  array.delFromFirst();
  array.delFromMid(2);
  array.PrintList();
  cout << "The array length "<< array.getLength();
}