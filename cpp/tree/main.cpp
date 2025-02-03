#include <iostream>
#include "tree.cpp"
// #include <tree>
using namespace std;

int main(){
  tree m;

  m.insert(5);
  m.insert(2);
  m.insert(6);
  // m.inorder();
  m.postorder();
}