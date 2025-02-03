#include <iostream>
#include "stack.cpp"
using namespace std;

int main(){
  stack obj;
  // push methods
  cout << obj.push(1)<<endl;
  cout << obj.push(2)<<endl;
  cout << obj.push(2)<<endl;
  cout << obj.push(3)<<endl;
  cout << "=========="<<endl;
  obj.PrintList();
  cout << "=========="<<endl;

  cout << "=========="<<endl;
  cout << obj.delRepeated() <<endl;
  obj.PrintList();
  cout << "=========="<<endl;
}