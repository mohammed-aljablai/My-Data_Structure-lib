#include "tree.hpp"

// Here to make the methods
node* tree::makeTree(node* left, int index, node* right){
  e = new node();
  e->left = left;
  e->index = index;
  e->right = right;
  return e;
}

// here to insert into it
bool tree::insertIntoTree(int index, node* root){
  try{
    if (root==NULL) root = makeTree(NULL, index, NULL);
    else{
      if(index<root->index)
        insertIntoTree(index, root->left);
      else
        insertIntoTree(index, root->right);
    }
    return true;
  }
  catch(const std::exception& e){
    std::cerr << e.what() << '\n';
    return false;
  }
}

// here to insert normally
bool tree::insert(int index){
  try{
    insertIntoTree(index, root);
    return true;
  }
  catch(const std::exception& e){
    std::cerr << e.what() << '\n';
    return false;
  }
}

// prints methods
  // first part
void tree::preorder(node* root){
  try{
    cout << root->index;
    preorder(root->left);
    preorder(root->right);
  }
  catch(const std::exception& e){
    std::cerr << e.what() << '\n';
  }
}
void tree::inorder(node* root){
  try{
    inorder(root->left);
    cout << root->index;
    inorder(root->right);
  }
  catch(const std::exception& e){
    std::cerr << e.what() << '\n';
  }
}
void tree::postorder(node* root){
  try{
    postorder(root->left);
    postorder(root->right);
    cout << root->index;
  }
  catch(const std::exception& e){
    std::cerr << e.what() << '\n';
  }
}
  // print
void tree::printPreorder(){
  preorder(root);
}
void tree::printInorder(){
  inorder(root);
}
void tree::printPostorder(){
  postorder(root);
}