package test;

import DynamicCollection.tree;

public class TreeTest {

  public static void main(String[] args) {
    tree<Integer> tree = new tree<>();
    tree.insert(50);
    tree.insert(30);
    tree.insert(70);
    tree.insert(20);
    tree.insert(40);
    tree.insert(60);
    tree.insert(80);

    System.out.println("Inorder traversal:");
    tree.inorder();

    System.out.println("Preorder traversal:");
    tree.preorder();

    System.out.println("Postorder traversal:");
    tree.postorder();

    System.out.println("Minimum value in tree: " + tree.findMin());

    System.out.println("Deleting 20...");
    tree.delete(20);
    System.out.println("Inorder traversal after deleting 20:");
    tree.inorder();

    System.out.println("Searching for 40: " + tree.searchFor(40));
    System.out.println("Is 90 in the tree? " + tree.isRootExist(90));
    System.out.println("Tree size: " + tree.size());
  }
}
