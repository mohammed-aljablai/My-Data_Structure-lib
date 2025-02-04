package test;

import DynamicCollection.Stack;

public class StackTest {

  public static void main(String[] args) {
    Stack<Integer> stack = new Stack<>();
    stack.push(10);
    stack.push(20);
    stack.push(30);
    System.out.println("Stack after pushing elements:");
    stack.printList();

    stack.pop();
    System.out.println("Stack after popping an element:");
    stack.printList();

    System.out.println("Current length of the stack: " + stack.getLength());
  }
}
