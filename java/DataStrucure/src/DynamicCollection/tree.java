package DynamicCollection;

public class tree<T extends Comparable<T>> {

  private static class Node<T> {

    T data;
    Node<T> left, right;

    Node(T value) {
      data = value;
      left = null;
      right = null;
    }
  }

  private Node<T> mainRoot = null;
  private int size = 0;

  // Helper method to insert a value into the tree
  private Node<T> insert(Node<T> root, T value) {
    if (root == null) {
      size++;
      return new Node<>(value);
    }
    if (value.compareTo(root.data) < 0) {
      root.left = insert(root.left, value);
    } else if (value.compareTo(root.data) > 0) {
      root.right = insert(root.right, value);
    }
    return root;
  }

  public boolean insert(T value) {
    if (isRootExist(value)) {
      return false; // Value already exists
    }
    mainRoot = insert(mainRoot, value);
    return true;
  }

  // Helper method to delete a value from the tree
  private Node<T> delete(Node<T> root, T value) {
    if (root == null) {
      return null;
    }

    if (value.compareTo(root.data) < 0) {
      root.left = delete(root.left, value);
    } else if (value.compareTo(root.data) > 0) {
      root.right = delete(root.right, value);
    } else {
      // Node to delete found
      if (root.left == null) {
        return root.right;
      }
      if (root.right == null) {
        return root.left;
      }

      // Node with two children: Get the inorder successor (smallest in the right subtree)
      Node<T> minNode = findMin(root.right);
      root.data = minNode.data;
      root.right = delete(root.right, minNode.data);
    }
    return root;
  }

  public boolean delete(T value) {
    if (!isRootExist(value)) {
      return false; // Value doesn't exist
    }
    mainRoot = delete(mainRoot, value);
    size--;
    return true;
  }

  // Helper method to find the minimum value in the tree
  private Node<T> findMin(Node<T> root) {
    while (root != null && root.left != null) {
      root = root.left;
    }
    return root;
  }

  public T findMin() {
    if (mainRoot == null) {
      throw new IllegalStateException("Tree is empty");
    }
    return findMin(mainRoot).data;
  }

  // Helper method to check if a value exists in the tree
  private boolean isRootExist(Node<T> root, T value) {
    if (root == null) {
      return false;
    }

    if (value.compareTo(root.data) < 0) {
      return isRootExist(root.left, value);
    } else if (value.compareTo(root.data) > 0) {
      return isRootExist(root.right, value);
    } else {
      return true; // Value found
    }
  }

  public boolean isRootExist(T value) {
    return isRootExist(mainRoot, value);
  }

  // Helper method to search for a value in the tree
  private Node<T> searchFor(Node<T> root, T value) {
    if (root == null || root.data.equals(value)) {
      return root;
    }
    if (value.compareTo(root.data) < 0) {
      return searchFor(root.left, value);
    } else {
      return searchFor(root.right, value);
    }
  }

  public T searchFor(T value) {
    Node<T> result = searchFor(mainRoot, value);
    if (result == null) {
      throw new IllegalArgumentException("Value not found in the tree");
    }
    return result.data;
  }

  // Helper method for preorder traversal
  private void preorder(Node<T> root) {
    if (root != null) {
      System.out.print(root.data + " ");
      preorder(root.left);
      preorder(root.right);
    }
  }

  public void preorder() {
    preorder(mainRoot);
    System.out.println();
  }

  // Helper method for inorder traversal
  private void inorder(Node<T> root) {
    if (root != null) {
      inorder(root.left);
      System.out.print(root.data + " ");
      inorder(root.right);
    }
  }

  public void inorder() {
    inorder(mainRoot);
    System.out.println();
  }

  // Helper method for postorder traversal
  private void postorder(Node<T> root) {
    if (root != null) {
      postorder(root.left);
      postorder(root.right);
      System.out.print(root.data + " ");
    }
  }

  public void postorder() {
    postorder(mainRoot);
    System.out.println();
  }

  // Get the size of the tree
  public int size() {
    return size;
  }
}
