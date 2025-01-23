#include "stack.hpp"

// Create a Node 
node* stack::makeNode(int no, node* next){
  e = new node();
  e->index= no;
  e->next = next;
  return  e;
}

// Add Elements
  // Add to First
  // Add to End
bool stack::push(int no){
  try{
    if (head==NULL) head=makeNode(no , NULL);
    else{
      e = makeNode(no,   head);
      head = e;
    }
    return true;
  } catch(const std::exception x){ return false;}
}

// Delete Element
bool stack::pop(){
  try{
    if (head ==NULL) return false;
    e = head;
    head = head->next;
    delete e;
    return true;
  } catch(const std::exception x){return false;}
}

// print Elements
bool stack::PrintList(){
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
int stack::getLength(){
  e=head;
  int i=0;
  while (e!=NULL){
    i++;
    e= e->next;
  }
  return i;
}

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