from ..singleList.singleList import SingleLinkedList

class Stack:
    def __init__(self):
        self.myStack = SingleLinkedList()

    def push(self, value):
        return self.myStack.add_to_first(value)

    def pop(self):
        return self.myStack.del_from_first()

    def print_stack(self):
        return self.myStack.print_list()

    def get_length(self):
        return self.myStack.get_length()
