from queue import Queue

q = Queue()
q.enqueue(5)
q.enqueue(15)
q.enqueue(25)
q.print_queue()  # 5 -> 15 -> 25 -> None
q.dequeue()
q.print_queue()  # 15 -> 25 -> None
