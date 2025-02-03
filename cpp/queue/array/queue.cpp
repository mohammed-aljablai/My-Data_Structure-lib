#include "queue.hpp"

queue::queue(int s){
  size = s;
}

// push
bool queue::push(int no){
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
int queue::pop(){
  if (top==-1) return NULL;
  return stack[head++];
}

// print Elements
bool queue::PrintList(){
  try{
    for (int i = 0; i < size; i++)
      cout << stack[i];
    return true;
  }
  catch(const std::exception x) {return false;}
}
// get array length
int queue::getLength(){
  int i;
  while(i<size)
    i++;
  return i;
}