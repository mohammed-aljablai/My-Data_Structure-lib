#include "stack.hpp"

template <typename T>
stackArray<T>::stackArray(int s){
  size = s;
  stack = new T[size];
}

// push
template <typename T>
bool stackArray<T>::push(T value){
  try{
    if(top==size-1) return false;
    stack[++top] = value;
  }
  catch(const std::exception& e){
    std::cerr << e.what() << '\n';
    return false;
  }
  
}

// pop
template <typename T>
int stackArray<T>::pop(){
  if (top==-1) return NULL;
  return stack[top--];
}

// print Elements
template <typename T>
bool stackArray<T>::PrintList(){
  try{
    for (int i = 0; i < size; i++)
      cout <<i <<": " << stack[i];
    return true;
  }
  catch(const std::exception x) {return false;}
}
// get array length
template <typename T>
int stackArray<T>::getLength(){
  int i;
  while(i<size)
    i++;
  return i;
}