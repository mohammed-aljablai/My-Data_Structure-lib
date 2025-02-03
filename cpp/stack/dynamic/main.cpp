#include <iostream>
#include "stack.cpp"
using namespace std;

int main(){
  stack<int> obj;
  // push methods
  cout << obj.push(1)<<endl;
  cout << obj.push(2)<<endl;
  cout << obj.push(2)<<endl;
  cout << obj.push(3)<<endl;
  cout << obj.pop()<<endl;
  cout << "=========="<<endl;
  obj.PrintList();
  cout << "=========="<<endl;
}