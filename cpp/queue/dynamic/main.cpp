#include <iostream>
#include "queue.cpp"
// #include <stack>
using namespace std;

int main(){
  // cout << "hello world";
  queue<int> obj;
  cout << obj.enqueue(1) <<endl;
  cout << obj.enqueue(2) <<endl;
  cout << obj.enqueue(3) <<endl;
  cout << obj.enqueue(4) <<endl;
  cout << obj.disEnqueue() <<endl;
  obj.PrintList();
}