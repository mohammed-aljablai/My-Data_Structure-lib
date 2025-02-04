#include <iostream>
using namespace std;

#ifndef tree_h
#define tree_h

template <typename T>
class node{
public:
  node<T>* left;
  T data;
  node<T>* right;

  node(T value){
    data = value;
    left = nullptr;
    right = nullptr;
  }
};
template <typename T>
class tree{
private:
  int size=0;
  node<T> *mainRoot = nullptr;
  
  // Insert helper functions 
  node<T>* insert(node<T> *root, T value);
  //  remove helper
  node<T>* del(node<T> *root, T value);
  node<T>* findMin(node<T> *root);
  // Find if the root exist or not helper
  bool isRootExist(node<T> *root, T value);
  // Search for an elements helper
  node<T>* searchFor(node<T> *root, T value);
  // print
  void preorder(node<T>* root);
  void inorder(node<T>* root);
  void postorder(node<T>* root);

public:
  bool insert(T value);
  // Delete elemnts
  bool del(T value);
  void preorder();
  void inorder();
  void postorder();
  // Find if the root exist or not helper
  bool isRootExist(T value);
  // find min
  node<T> findMin();
  // Search for an elements helper
  node<T> searchFor(T value);
};

#endif