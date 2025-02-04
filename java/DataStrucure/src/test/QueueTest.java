package test;

import DynamicCollection.Queue;

public class QueueTest {

  public static void main(String[] args) {
    Queue<Integer> queue = new Queue<>();
    queue.enqueue(10);
    queue.enqueue(20);
    queue.enqueue(30);
    System.out.println("Queue after enqueuing elements:");
    queue.printList();

    queue.disEnqueue();
    System.out.println("Queue after dequeuing an element:");
    queue.printList();

    System.out.println("Current length of the queue: " + queue.getLength());
  }
}
