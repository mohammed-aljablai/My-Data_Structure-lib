#include "singlelinkedlist.hpp"

// constructors
template <typename T>
singlelinkedlist<T>::singlelinkedlist(){
  head = nullptr;
  tail = nullptr;
  e = nullptr;
  size = 0;
}


// Create a Node 
template <typename T>
node<T>* singlelinkedlist<T>::makeNode(T& value, node<T>* next){
  e = new node<T>();
  e->data = value;
  e->next = next;
  return  e;
}

// Add Elements
  // Add to First
template <typename T>
bool singlelinkedlist<T>::addToFirst(T value){
  try{
    if (head==nullptr) head=tail=makeNode(value, nullptr);
    else head = makeNode(value, head);
    size++;
    return true;
  } catch(const std::exception x){return false;}
}
  // Add to End
template <typename T>
bool singlelinkedlist<T>::addToEnd(T value){
  try{
    if (head==NULL) head=tail=makeNode(value, nullptr);
    else{
      e = makeNode(value, nullptr);
      tail->next = e;
      tail = e;
    }
    size++;
    return true;
  } catch(const std::exception x){ return false;}
}
  // Add to Mid
template <typename T>
bool singlelinkedlist<T>::addToMid(int index, T value){
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
      temp->next = makeNode(value, temp->next);
      // e->next = temp->next;
      // temp->next = e;
    }
    size++;
    return true;
  } catch(const std::exception x){return false;}
}

// Delete Element
template <typename T>
bool singlelinkedlist<T>::delFromFirst(){
  try{
    if (head==nullptr) return false;
    e = head;
    head=head->next;
    delete e;
    size--;
    return true;
  } catch(const std::exception x){return false;}
}
template <typename T>
bool singlelinkedlist<T>::delFromEnd(){
  try{
    if (head==nullptr) return false;
    if (head==tail){
      e=head;
      head=tail=nullptr;
      delete e;
      size--;
      return true;    
    }else{
      e=head;
      while ((e->next!=tail)) e = e->next;
      tail = e;
      e= e->next;
      tail->next=NULL;
      delete e;
      size--;
      return true;
    }
  } catch(const std::exception x){return false;}
}
template <typename T>
bool singlelinkedlist<T>::delFromMid(int index){
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
      delete e;
      size--;
      return true;
    }
    return false;
  } catch(const std::exception x){return false;}
}

// print Elements
template <typename T>
bool singlelinkedlist<T>::PrintList(){
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
int singlelinkedlist<T>::getLength(){
  return size;
}
/*
// Additional methods
// swab 
void swabber(int &no, int &no2){
  int temp = no;
  no = no2;
  no2 = temp;
  return;
}
// Order
bool singlelinkedlist::orderElements(){
  try{
    node* i = head;
    if (i==nullptr) return false;
    while (true){
      for(e = i->next; e!=nullptr; e= e->next){
        if(i->index>e->index){
          int temp = i->index;
          i->index = e->index;
          e->index = temp;
        }
      }
      i= i->next;
      if ((i->next) == (nullptr)) break;
    }
    return true;
  }
  catch(const std::exception& e){
    std::cerr << e.what() << '\n';
  }  
}
// revert
bool singlelinkedlist::revert(){
  try{
    // This to get the last
    node * last=head;
    while (last->next!=nullptr){
      last = last->next;
    }
    for (e = head; e !=nullptr; e=e->next){
      if(e==head){
        swabber(e->index, last->index);
        continue;
      }
      node * beforeLast=head;
      while (beforeLast->next!=last){
        beforeLast = beforeLast->next;
      }
      if (e->next==beforeLast || e==beforeLast){
        break;
      }
      swabber(e->index, beforeLast->index);
    }
    return true;
  }
  catch(const std::exception& e){
    return false;
    std::cerr << e.what() << '\n';
  }
}
*/