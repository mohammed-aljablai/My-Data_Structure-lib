#include "doublelinkedlist.hpp"

template <typename T>
doublelinkedlist<T>::doublelinkedlist(){
  head = nullptr;
  tail = nullptr;
  e = nullptr;
  size = 0;
}
template <typename T>
doublelinkedlist<T>::~doublelinkedlist(){}

template <typename T>
node<T>* doublelinkedlist<T>::makeNode(T& value, node<T>* next, node<T>* previous){
  e = new node<T>();
  e->data= value;
  e->previous= previous;
  e->next = next;
  return  e;
}

// Add elements
template <typename T>
bool doublelinkedlist<T>::addToFirst(T value){
  try{
    if (head==nullptr) head=tail=makeNode(value, nullptr, nullptr);
    else{
      e = makeNode(value, head, nullptr);
      head->previous=e;
      head = e;
    }
    size++;
    return true;
  }
  catch(const std::exception& e){return false;} 
}
template <typename T>
bool doublelinkedlist<T>::addToEnd(T value){
  try{
    if (head==NULL) head=tail=makeNode(value, nullptr, nullptr);
    else{
      e = makeNode(value, nullptr, tail);
      tail->next=e;
      tail = e;
    }
    size++;
    return true;
  }
  catch(const std::exception& e){return false;} 
}
template <typename T>
bool doublelinkedlist<T>::addToMid(int index, T value){
  try{
    if (index < 0 || index >= size) {
      throw std::out_of_range("Index out of range");
    }
    if (index==0) {
      addToFirst(value);
      return true;
    }else if(index==size-1){
      addToEnd(value);
      return true;
    }else{
      node<T>* temp = head;
      for (int i = 0; i < index - 1; i++) {
          temp = temp->next;
      }
      node<T>* newNode = makeNode(value, temp->next, temp);
      temp->next = newNode;
      newNode->next->previous = newNode;
    
    }
    size++;
    return true;
  }catch(const std::exception& e){return false;}
}

// delete Elements
template <typename T>
bool doublelinkedlist<T>::delFromFirst(){
  try{
    if(head==nullptr) return false;
    // if(head==tail) {e = head; delete e; return true;}
    e = head;
    head = head->next;
    head->previous = nullptr;
    size--;
    delete e;
    return true;
  }catch(const std::exception& e){return false;}
}
template <typename T>
bool doublelinkedlist<T>::delFromEnd(){
  try{
    if (head==nullptr) return false;
    if (head==tail){
      e=head;
      head=tail=nullptr;
      delete e;
      size--;
      return true;    
    }else{
      e = tail;
      tail = tail->previous;
      tail->next = nullptr;
      delete e;
      size--;
      return true;
    }
  }catch(const std::exception& e){return false;}
}
template <typename T>
bool doublelinkedlist<T>::delFromMid(int index){
  try{
    if (index < 0 || index >= size)
      throw std::out_of_range("Index out of range");
    if (index == 0) 
      delFromFirst();
    else if (index == size - 1)
      delFromEnd();
    else{
      node<T>* temp = head;
      for (int i = 0; i < index - 1; i++)
        temp = temp->next;
      e= temp->next;
      temp->next = e->next;
      e->next->previous = temp;
      delete e;
      size--;
      return true;
    }
    return false;
  }catch(const std::exception& e){return false;}
}


// print
template <typename T>
bool doublelinkedlist<T>::PrintList(){
  try{
    int index=0;
    e=head;
    while (e!=NULL){
      cout <<index <<": " <<e->data <<endl;
      e= e->next;
      index++;
    }
    return true;
  }
  catch(const std::exception x) {return false;}
}
// get array length
template <typename T>
int doublelinkedlist<T>::getLength(){
  return size;
}

// Additional methods
/*
bool doublelinkedlist::spicalAdd(int index){
try{
  if(index%2==0) addToEnd(index);
  else addToFirst(index);
  return true;
}
catch(const std::exception& e){return false;}
}
*/