package DynamicCollection;

public class SingleLinkedList<T> {

  private static class Node<T> {

    T data;
    Node<T> next;

    Node(T data) {
      this.data = data;
      this.next = null;
    }
  }

  private Node<T> head;
  private Node<T> tail;
  private int size;

  public SingleLinkedList() {
    this.head = null;
    this.tail = null;
    this.size = 0;
  }

  private Node<T> makeNode(T value, Node<T> next) {
    Node<T> newNode = new Node<>(value);
    newNode.next = next;
    return newNode;
  }

  public boolean addToFirst(T value) {
    Node<T> newNode = makeNode(value, head);
    head = newNode;
    if (tail == null) {
      tail = head;
    }
    size++;
    return true;
  }

  public boolean addToEnd(T value) {
    Node<T> newNode = makeNode(value, null);
    if (tail == null) {
      head = tail = newNode;
    } else {
      tail.next = newNode;
      tail = newNode;
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
    Node<T> newNode = makeNode(value, current.next);
    current.next = newNode;
    size++;
    return true;
  }

  public boolean delFromFirst() {
    if (head == null) {
      return false;
    }
    head = head.next;
    if (head == null) {
      tail = null;
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
    Node<T> current = head;
    for (int i = 0; i < index - 1; i++) {
      current = current.next;
    }
    current.next = current.next.next;
    if (current.next == null) {
      tail = current;
    }
    size--;
    return true;
  }

  public boolean delFromEnd() {
    if (head == null) {
      return false;
    }
    if (head.next == null) {
      head = tail = null;
    } else {
      Node<T> current = head;
      while (current.next != tail) {
        current = current.next;
      }
      current.next = null;
      tail = current;
    }
    size--;
    return true;
  }

  public boolean printList() {
    if (head == null) {
      return false;
    }
    Node<T> current = head;
    while (current != null) {
      System.out.print(current.data + " ");
      current = current.next;
    }
    System.out.println();
    return true;
  }

  public int getLength() {
    return size;
  }

  public boolean orderElements() {
    if (size <= 1) {
      return true;
    }
    for (int i = 0; i < size; i++) {
      Node<T> current = head;
      while (current.next != null) {
        if (((Comparable<T>) current.data).compareTo(current.next.data) > 0) {
          T temp = current.data;
          current.data = current.next.data;
          current.next.data = temp;
        }
        current = current.next;
      }
    }
    return true;
  }

  public boolean revert() {
    if (head == null || head.next == null) {
      return true;
    }
    Node<T> prev = null;
    Node<T> current = head;
    tail = head;
    while (current != null) {
      Node<T> nextNode = current.next;
      current.next = prev;
      prev = current;
      current = nextNode;
    }
    head = prev;
    return true;
  }
}
