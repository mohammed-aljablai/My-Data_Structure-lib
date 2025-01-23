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