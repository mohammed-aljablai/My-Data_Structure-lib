#include "doublelinkedlist.hpp"

doublelinkedlist::doublelinkedlist(){}
doublelinkedlist::~doublelinkedlist(){}

node* doublelinkedlist::makeNode(float no, node* next, node* previous){
  e = new node();
  e->index= no;
  e->next = next;
  return  e;
}

// Add elements
bool doublelinkedlist::addToFirst(float index){
  try{
    if (head==NULL) head=tail=makeNode(index, NULL, NULL);
    else{
      e = makeNode(index, head, NULL);
      head->previous=e;
      head = e;
    }
    return true;
  }
  catch(const std::exception& e){return false;} 
}
bool doublelinkedlist::addToEnd(float index){
  try{
    if (head==NULL) head=tail=makeNode(index, NULL, NULL);
    else{
      e = makeNode(index, NULL, tail);
      tail->next=e;
      tail = e;
    }
    return true;
  }
  catch(const std::exception& e){return false;} 
}
bool doublelinkedlist::addToMid(float index, float searchFor){
  try{
    if(head==NULL) return false;
    // if(head==tail)
    for (e = head; e !=NULL; e=e->next){
      if(e->index!=searchFor) continue;
      node* currentElement = e;
      e = makeNode(index, currentElement->next, currentElement);
      currentElement->next->previous = e;
      currentElement->next = e;
      return true;
    }
    return false;
  }catch(const std::exception& e){return false;}
}

// delete Elements
bool doublelinkedlist::delFromFirst(){
  try{
    if(head==NULL) return false;
    // if(head==tail) {e = head; delete e; return true;}
    e = head;
    head = head->next;
    head->previous = NULL;
    delete e;
    return true;
  }catch(const std::exception& e){return false;}
}
bool doublelinkedlist::delFromEnd(){
  try{
    if(head==NULL) return false;
    e = tail;
    tail = tail->previous;
    tail->next = NULL;
    delete e;
    return true;
  }catch(const std::exception& e){return false;}
}
bool doublelinkedlist::delFromMid(float searchFor){
  try{
    if(head==NULL) return false;
    e = head;
    for (e = head; e !=NULL; e=e->next){
      if(e->index!=searchFor) continue;
      e->previous->next = e->next;
      delete e;
      return true;
    }
    tail = tail->previous;
    tail->next = NULL;
    delete e;
    return false;
  }catch(const std::exception& e){return false;}
}


// print
bool doublelinkedlist::PrintList(){
  try{
    e=head;
    while (e!=NULL){
      cout<< e<< " is "<< e->index <<endl;
      e= e->next;
    }
    return true;
  }
  catch(const std::exception x) {return false;}
}
// get array length
int doublelinkedlist::getLength(){
  e=head;
  int i=0;
  while (e!=NULL){
    i++;
    e= e->next;
  }
  return i;
}