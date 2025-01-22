#include <iostream>
#include "queue.cpp"
// #include <stack>
using namespace std;

int main(){
  queue obj;
  cout << obj.enqueue(1) <<endl;
  cout << obj.enqueue(2) <<endl;
  cout << obj.enqueue(3) <<endl;
  cout << obj.disEnqueue();
  obj.PrintList();
}