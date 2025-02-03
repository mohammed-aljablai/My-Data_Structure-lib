#include <iostream>
#include <stack>
#include "doublelinkedlist.cpp"
using namespace std;

int main(){
  doublelinkedlist<int> array;
  array.addToEnd(1);
  array.addToFirst(0);
  array.addToMid(1, 5);
  array.delFromMid(1);
  array.PrintList();
}