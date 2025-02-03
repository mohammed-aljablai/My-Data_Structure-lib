#include "queue.hpp"

// Add Elements
  // Add to First
  // Add to End
template <typename T>
bool queue<T>::enqueue(T value){
  try{
    myQueue.addToEnd(value);
    return true;
  } catch(const std::exception x){ return false;}
}

// Delete Element
template <typename T>
bool queue<T>::disEnqueue(){
  try{
    myQueue.delFromFirst();
    return true;
  } catch(const std::exception x){return false;}
}

// print Elements
template <typename T>
bool queue<T>::PrintList(){
  try{
    myQueue.PrintList();
    return true;
  }
  catch(const std::exception x) {return false;}
}
// get array length
template <typename T>
int queue<T>::getLength(){
  return myQueue.getLength();
}

/*
// Additional methods
// slice
queue queue::sliceQ(int index){
  try{
    queue newElements;
    e=head;
    while (e!=NULL && e->index!=index){
      newElements.enqueue(index);
      e= e->next;
      // node *goDel = head;
      // head = head->next;
      // delete goDel;
    }
    return newElements;
  }
  catch(const std::exception x) {return queue();}
}
// primary number checker
bool isPrimary(int no)
{
  if (no == 1)
    return false;
  if (no == 2)
    return true;
  for (int i = 2; i < no; i++)
    if (no % i==0)
      return false;
  return true;
}

// Delete primary number
bool queue::delPrimaryNo(){
  try{
    e=head;
    if (isPrimary(head->index)){
      node *goDel;
      head = head->next;
      delete goDel;
    }
    while (e->next!=NULL){
      if (isPrimary(e->next->index)){
        node* goDel = e->next;
        e->next = e->next->next;
        delete goDel;
        continue;
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