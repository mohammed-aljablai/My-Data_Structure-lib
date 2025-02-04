package DynamicCollection;

public class DoubleLinkedList<T extends Comparable<T>> {

  private static class Node<T> {

    public Node<T> previous;
    public T data;
    public Node<T> next;

    public Node(T data) {
      this.data = data;
      this.previous = null;
      this.next = null;
    }
  }
  private Node<T> head;
  private Node<T> tail;
  private int size;

  public DoubleLinkedList() {
    head = null;
    tail = null;
    size = 0;
  }

  private Node<T> makeNode(T value, Node<T> next, Node<T> previous) {
    Node<T> newNode = new Node<>(value);
    newNode.next = next;
    newNode.previous = previous;
    return newNode;
  }

  public boolean addToFirst(T value) {
    Node<T> newNode = makeNode(value, head, null);
    if (head != null) {
      head.previous = newNode;
    }
    head = newNode;
    if (tail == null) {
      tail = newNode;
    }
    size++;
    return true;
  }

  public boolean addToEnd(T value) {
    Node<T> newNode = makeNode(value, null, tail);
    if (tail != null) {
      tail.next = newNode;
    }
    tail = newNode;
    if (head == null) {
      head = newNode;
    }
    size++;
    return true;
  }

  public boolean addToMid(int index, T value) {
    if (index < 0 || index > size) {
      return false;
    }
    if (index == 0) {
      return addToFirst(value);
    }
    if (index == size) {
      return addToEnd(value);
    }

    Node<T> current = head;
    for (int i = 0; i < index - 1; i++) {
      current = current.next;
    }

    Node<T> newNode = makeNode(value, current.next, current);
    current.next.previous = newNode;
    current.next = newNode;
    size++;
    return true;
  }

  public boolean delFromFirst() {
    if (head == null) {
      return false;
    }
    head = head.next;
    if (head != null) {
      head.previous = null;
    } else {
      tail = null;
    }
    size--;
    return true;
  }

  public boolean delFromEnd() {
    if (tail == null) {
      return false;
    }
    tail = tail.previous;
    if (tail != null) {
      tail.next = null;
    } else {
      head = null;
    }
    size--;
    return true;
  }

  public boolean delFromMid(int index) {
    if (index < 0 || index >= size) {
      return false;
    }
    if (index == 0) {
      return delFromFirst();
    }
    if (index == size - 1) {
      return delFromEnd();
    }

    Node<T> current = head;
    for (int i = 0; i < index; i++) {
      current = current.next;
    }

    current.previous.next = current.next;
    current.next.previous = current.previous;
    size--;
    return true;
  }

  public void printList() {
    Node<T> current = head;
    while (current != null) {
      System.out.print(current.data + " ");
      current = current.next;
    }
    System.out.println();
  }

  public int getLength() {
    return size;
  }

  public boolean specialAdd(int index) {
    return false;
  }
}
