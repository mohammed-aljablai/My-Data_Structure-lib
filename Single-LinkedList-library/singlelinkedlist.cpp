#include "singlelinkedlist.hpp"

// Create a Node 
node* singlelinkedlist::makeNode(int no, node* next){
  e = new node();
  e->index= no;
  e->next = next;
  return  e;
}

// Add Elements
  // Add to First
bool singlelinkedlist::addToFirst(int no){
  try{
    if (head==NULL) head=tail=makeNode(no , NULL);
    else head = makeNode(no, head);
    return true;
  } catch(const std::exception x){return false;}
}
  // Add to End
bool singlelinkedlist::addToEnd(int no){
  try{
    if (head==NULL) head=tail=makeNode(no , NULL);
    else{
      e = makeNode(no,   NULL);
      tail->next = e;
      tail = e;
    }
    return true;
  } catch(const std::exception x){ return false;}
}
  // Add to Mid
bool singlelinkedlist::addToMid(int no, int index){
  try{
    if (head==NULL) {
      head=tail=makeNode(no , NULL);
      return true;
    }
    else{
      for (e = head; e->next!=NULL; e= e->next){
        if (e->index!=index) continue;
        e->next = makeNode(no, e->next);
        return true;
      }
      return false;
    }
    return true;
  } catch(const std::exception x){return false;}
}

// Delete Element
bool singlelinkedlist::delFromFirst(){
  try{
    if (head==NULL) return false;
    e = head;
    head=head->next;
    delete e;
    return true;
  } catch(const std::exception x){return false;}
}
bool singlelinkedlist::delFromEnd(){
  try{
    if (head==NULL) return false;
    if (head==tail){
      e=head;
      head=tail=NULL;
      delete e;
    }
    e=head;
    while ((e->next!=tail)) e = e->next;
    tail = e;
    e= e->next;
    tail->next=NULL;
    delete e;
    return true;
  } catch(const std::exception x){return false;}
}
bool singlelinkedlist::delFromMid(int index){
  try{
    if (head==NULL) return false;
    for (e = head; e!=NULL; e= e->next){
      if (e->next->index!=index) continue;
      node *beforDelElement;
      beforDelElement = e;
      e= e->next;
      beforDelElement->next = e->next;
      delete e;
      return true;
    }
    return false;
    
  } catch(const std::exception x){return false;}
}

// print Elements
bool singlelinkedlist::PrintList(){
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
int singlelinkedlist::getLength(){
  e=head;
  int i=0;
  while (e!=NULL){
    i++;
    e= e->next;
  }
  return i;
}