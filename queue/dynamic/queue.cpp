#include "queue.hpp"

// Create a Node 
node* queue::makeNode(int no, node* next){
  e = new node();
  e->index= no;
  e->next = next;
  return  e;
}

// Add Elements
  // Add to First
  // Add to End
bool queue::enqueue(int no){
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

// split
node queue::splitQ(int index){
  try{
    e=head;
    while (e!=NULL){
      cout<< e<< " is "<< e->index <<endl;
      e= e->next;
    }

  }
  catch(const std::exception x) {return queue();}
}

// Delete Element
bool queue::disEnqueue(){
  try{
    if (head ==NULL) return false;
    e = head;
    head = head->next;
    delete e;
    return true;
  } catch(const std::exception x){return false;}
}

// print Elements
bool queue::PrintList(){
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
int queue::getLength(){
  e=head;
  int i=0;
  while (e!=NULL){
    i++;
    e= e->next;
  }
  return i;
}