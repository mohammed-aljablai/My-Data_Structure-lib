package test;

import DynamicCollection.SingleLinkedList;

public class SLLTest {

  public static void main(String[] args) {
    SingleLinkedList<Integer> list = new SingleLinkedList<>();
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
    System.out.println("List before sorting:");
    list.printList();
    list.orderElements();
    System.out.println("List after sorting:");
    list.printList();
    list.revert();
    System.out.println("List after reversing:");
    list.printList();
  }
}
