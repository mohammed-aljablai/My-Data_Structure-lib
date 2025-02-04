#include "queue.hpp"

template <typename T>
queue<T>::queue(int s){
  size = s;
  myQueue = new T[size];
}

// push
template <typename T>
bool queue<T>::push(T value){
  try{
    if(top==size-1) return false;
    myQueue[++top] = value;
  }
  catch(const std::exception& e){
    std::cerr << e.what() << '\n';
    return false;
  }
  
}

// pop
template <typename T>
int queue<T>::pop(){
  if (top==-1) return NULL;
  return myQueue[top++];
}

// print Elements
template <typename T>
bool queue<T>::PrintList(){
  try{
    for (int i = 0; i < top; i++)
      cout << i <<": "<< myQueue[i];
    return true;
  }
  catch(const std::exception x) {return false;}
}
// get array length
template <typename T>
int queue<T>::getLength(){
  int i;
  while(i<size)
    i++;
  return size;
}