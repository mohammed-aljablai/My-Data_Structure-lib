package DynamicCollection;

public class Queue<T> {
  private SingleLinkedList<T> myQueue;

  public Queue() {
    myQueue = new SingleLinkedList<>();
  }

  public boolean enqueue(T value) {
    return myQueue.addToEnd(value);
  }

  public boolean disEnqueue() {
    return myQueue.delFromFirst();
  }

  public boolean printList() {
    return myQueue.printList();
  }

  public int getLength() {
    return myQueue.getLength();
  }
}
