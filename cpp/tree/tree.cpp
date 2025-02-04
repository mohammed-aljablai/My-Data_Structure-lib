#include "tree.hpp"

template <typename T>
node<T> *tree<T>::insert(node<T> *root, T value)
{
  if (root == nullptr)
  {
    return new node(value);
    size++;
  }
  if (value < root->data)
  {
    root->left = insert(root->left, value);
  }
  else if (value > root->data)
  {
    root->right = insert(root->right, value);
  }
  return root;
}

template <typename T>
node<T> *tree<T>::del(node<T> *root, T value)
{
  if (root == nullptr){
    return nullptr;
  }
  if (value < root->data){
    root->left = removeHelper(root->left, value);
  }
  else if (value > root->data){
    root->right = removeHelper(root->right, value);
  }
  else{
    if (root->left == nullptr){
      node<T> *temp = root->right;
      delete root;
      return temp;
    }
    else if (root->right == nullptr){
      node<T> *temp = root->left;
      delete root;
      return temp;
    }
    node<T> *temp = findMin(root->right);
    root->data = temp->data;
    root->right = removeHelper(root->right, temp->data);
  }
  return root;
}

template <typename T>
node<T> tree<T>::*findMin(node<T> *root) {
  while (root->left != nullptr){
    root = root->left;
  }
  return root;
}

template <typename T>
bool tree<T>::isRootExist(node<T> *root, T value)
{
  try
  {
    // If node Null
    if (root == nullptr)
      return false;
    // If he find it
    if (value == root->data)
      return true;
    // here he call him self
    if (value < root->data)
      return searchHelper(root->left, value);
    else
      return searchHelper(root->right, value);
  }
  catch (const std::exception &e)
  {
    return false;
    std::cerr << e.what() << '\n';
  }
}

template <typename T>
node<T> *tree<T>::searchFor(node<T> *root, T value)
{
  try
  {
    // If node Null
    if (root == nullptr)
      return root;
    // If he find it
    if (value == root->data)
      return root;
    // here he call him self
    if (value < root->data)
      return searchHelper(root->left, value);
    else
      return searchHelper(root->right, value);
  }
  catch (const std::exception &e)
  {
    std::cerr << e.what() << '\n';
  }
}

template <typename T>
void tree<T>::preorder(node<T> *root)
{
  if (root != nullptr)
  {
    std::cout << root->data << " ";
    preorder(root->left);
    preorder(root->right);
  }
}

template <typename T>
void tree<T>::inorder(node<T> *root)
{
  if (root != nullptr)
  {
    inorder(root->left);
    std::cout << root->data << " ";
    inorder(root->right);
  }
}

template <typename T>
void tree<T>::postorder(node<T> *root)
{
  if (root != nullptr)
  {
    postorder(root->left);
    postorder(root->right);
    std::cout << root->data << " ";
  }
}

template <typename T>
bool tree<T>::insert(T value)
{
  try{
    mainRoot = insert(mainRoot, value);
    return true;
  }
  catch (const std::exception &e)
  {
    std::cerr << e.what() << '\n';
    return false;
  }
}

template <typename T>
bool tree<T>::del(T value){
  try{
    mainRoot = del(mainRoot, value);
    return true;
  }
  catch(const std::exception& e){
    std::cerr << e.what() << '\n';
  }
}

template <typename T>
void tree<T>::preorder(){
  cout << "Pre-order: ";
  preorder(mainRoot);
  cout << endl;
}

template <typename T>
void tree<T>::inorder()
{
  cout << "In-order: ";
  inorder(mainRoot);
  cout << endl;
}

template <typename T>
void tree<T>::postorder(){
  cout << "Post-order: ";
  postorder(mainRoot);
  cout << endl;
}

template <typename T>
bool tree<T>::isRootExist(T value){
  try{
    return isRootExist(mainRoot, value);
  }
  catch(const std::exception& e){
    return false;
  }
}

// find min
template <typename T>
node<T> tree<T>::findMin(){
  return findMin(mainRoot);
}
// Search for an elements helper
template <typename T>
node<T> tree<T>::searchFor(T value){
  try{
    return searchFor(mainRoot, value);
  }
  catch(const std::exception& e){
    std::cerr << e.what() << '\n';
    return node<T>();
  }
}