package DynamicCollection;

public class Stack<T> {

  private SingleLinkedList<T> myStack;

  public Stack() {
    myStack = new SingleLinkedList<>();
  }

  public boolean push(T value) {
    return myStack.addToFirst(value);
  }

  public boolean pop() {
    return myStack.delFromFirst();
  }

  public boolean printList() {
    return myStack.printList();
  }

  public int getLength() {
    return myStack.getLength();
  }

}
