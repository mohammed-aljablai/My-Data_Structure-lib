from ..singleList.singleList import SingleLinkedList

class Queue:
    def __init__(self):
        self.myQueue = SingleLinkedList()

    def enqueue(self, value):
        return self.myQueue.add_to_end(value)

    def dequeue(self):
        return self.myQueue.remove_from_start()

    def print_queue(self):
        return self.myQueue.print_list()

    def get_length(self):
        return self.myQueue.get_length()
