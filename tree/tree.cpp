#include "tree.hpp"

// Here to make the methods
#include <iostream>
using namespace std;
node* tree::insert(node *root, int value){
  if (root == nullptr){
    return new node(value);
  }
  if (value < root->index){
    root->left = insert(root->left, value);
  }
  else if (value > root->index){
    root->right = insert(root->right, value);
  }
  return root;
}

void tree::preorder(node *root){
  if (root != nullptr){
    std::cout << root->index << " ";
    preorder(root->left);
    preorder(root->right);
  }
}

void tree::inorder(node *root){
  if (root != nullptr){
    inorder(root->left);
    std::cout << root->index << " ";
    inorder(root->right);
  }
}

void tree::postorder(node *root){
  if (root != nullptr){
    postorder(root->left);     
    postorder(root->right);    
    cout << root->index << " "; 
  }
}

bool tree::insert(int value){
  try{
    mainRoot = insert(mainRoot, value);
    return true;
  }
  catch(const std::exception& e){
    std::cerr << e.what() << '\n';
    return false;
  }
  
}

void tree::preorder(){
  cout << "Pre-order: ";
  preorder(mainRoot);
  cout << endl;
}

void tree::inorder(){
  cout << "In-order: ";
  inorder(mainRoot);
  cout << endl;
}

void tree::postorder(){
  cout << "Post-order: ";
  postorder(mainRoot);
  cout << endl;
}