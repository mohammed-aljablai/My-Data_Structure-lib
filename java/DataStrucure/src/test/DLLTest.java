package test;

import DynamicCollection.DoubleLinkedList;

public class DLLTest {
  public static void main(String[] args) {
    DoubleLinkedList<Integer> list = new DoubleLinkedList<>();
    list.addToFirst(10);
    list.addToEnd(20);
    list.addToEnd(30);
    list.addToMid(1, 15);
    System.out.println("List after additions:");
    list.printList();
    list.delFromFirst();
    System.out.println("List after deleting from first:");
    list.printList();
    list.delFromMid(1);
    System.out.println("List after deleting from middle:");
    list.printList();
    list.delFromEnd();
    System.out.println("List after deleting from end:");
    list.printList();
    list.addToEnd(25);
    list.addToEnd(5);
  }
}
