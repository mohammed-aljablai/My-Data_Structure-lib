#include "stack.hpp"

stackArray::stackArray(int s){
  size = s;
}

// push
bool stackArray::push(int no){
  try{
    if(top==size-1) return false;
    stack[++top] = no;
  }
  catch(const std::exception& e){
    std::cerr << e.what() << '\n';
    return false;
  }
  
}

// pop
int stackArray::pop(){
  if (top==-1) return NULL;
  return stack[top--];
}

// print Elements
bool stackArray::PrintList(){
  try{
    for (int i = 0; i < size; i++)
      cout << stack[i];
    return true;
  }
  catch(const std::exception x) {return false;}
}
// get array length
int stackArray::getLength(){
  int i;
  while(i<size)
    i++;
  return i;
}