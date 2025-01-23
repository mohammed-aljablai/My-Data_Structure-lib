#include <iostream>
using namespace std;

#ifndef tree_h
#define tree_h

struct node{
  node* left;
  int index;
  node* right;
};

class tree{
  private:
  node* root, *e;
  bool insertIntoTree(int index, node *root);
  node* makeTree(node* left, int index, node* right);
  void preorder(node* root);
  void inorder(node* root);
  void postorder(node* root);

public:
  bool insert(int index);
  void printPreorder();
  void printInorder();
  void printPostorder();
};

#endif