#include "stack.hpp"

// Add Elements
  // Add to First
  // Add to End
template <typename T>
bool stack<T>::push(T value){
  try{
    myStack.addToEnd(value);
    return true;
  } catch(const std::exception x){ return false;}
}

// Delete Element
template <typename T>
bool stack<T>::pop(){
  try{
    myStack.deleteFromEnd();
    return true;
  } catch(const std::exception x){return false;}
}

// print Elements
template <typename T>
bool stack<T>::PrintList(){
  try{
    myStack.PrintList();
    return true;
  }
  catch(const std::exception x) {return false;}
}
// get array length
template <typename T>
int stack<T>::getLength(){
  return myStack.getLength();
}

/*
// Additional methods
// delete a repeated methods
bool stack::delRepeated(){
  try{
    e=head;
    while (e!=NULL){
      for (node* i = e; i->next != NULL; i=i->next){
        if (i->next->index==e->index){
          node* goDel = i->next;
          i->next = goDel->next;
          delete goDel;
        }
        }
        e= e->next;
      }
    return true;
  }
  catch(const std::exception& e){
    std::cerr << e.what() << '\n';
    return false;
  } 
}
*/