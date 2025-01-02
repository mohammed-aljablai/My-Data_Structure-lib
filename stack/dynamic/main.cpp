#include <iostream>
#include "stack.cpp"
// #include <stack>
using namespace std;

int main(){
  stack obj;

  // push methods
  cout << obj.push(1)<<endl;
  cout << obj.push(2)<<endl;
  cout << obj.push(3)<<endl;
  cout << "=========="<<endl;
  obj.PrintList();
  cout << "=========="<<endl;

  // pop methods
  cout << obj.pop()<<endl;
  cout << obj.pop()<<endl;
  cout << obj.pop()<<endl;
  cout << obj.pop()<<endl;
  cout << "=========="<<endl;
  obj.PrintList();
  cout << "=========="<<endl;

}