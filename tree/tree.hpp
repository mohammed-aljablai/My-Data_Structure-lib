#include <iostream>
using namespace std;

#ifndef tree_h
#define tree_h

struct node{
  node* left;
  int index;
  node* right;

  node(int val){
    index = val;
    left = nullptr;
    right = nullptr;
  }
};


class tree{
  private:
  node *mainRoot = nullptr;
  node* insert(node *root, int index);
  void preorder(node* root);
  void inorder(node* root);
  void postorder(node* root);

public:
  bool insert(int index);
  void preorder();
  void inorder();
  void postorder();
};

#endif