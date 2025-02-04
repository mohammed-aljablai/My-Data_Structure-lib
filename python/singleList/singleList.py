class Node:
    def __init__(self, data):
        self.data = data
        self.next = None


class SingleLinkedList:
    def __init__(self):
        self.head = None
        self.tail = None
        self.size = 0

    def make_node(self, value, next_node=None):
        new_node = Node(value)
        new_node.next = next_node
        return new_node

    def add_to_first(self, value):
        new_node = self.make_node(value, self.head)
        self.head = new_node
        if self.tail is None:
            self.tail = new_node
        self.size += 1
        return True

    def add_to_end(self, value):
        new_node = self.make_node(value)
        if self.tail is not None:
            self.tail.next = new_node
        self.tail = new_node
        if self.head is None:
            self.head = new_node
        self.size += 1
        return True

    def add_to_mid(self, index, value):
        if index < 0 or index > self.size:
            return False 
        if index == 0:
            return self.add_to_first(value)
        if index == self.size:
            return self.add_to_end(value)

        current = self.head
        for _ in range(index - 1):
            current = current.next

        new_node = self.make_node(value, current.next)
        current.next = new_node
        self.size += 1
        return True

    def del_from_first(self):
        if self.head is None:
            return False 
        self.head = self.head.next
        if self.head is None:
            self.tail = None
        self.size -= 1
        return True

    def del_from_end(self):
        if self.tail is None:
            return False
        if self.head == self.tail:
            self.head = self.tail = None
        else:
            current = self.head
            while current.next != self.tail:
                current = current.next
            current.next = None
            self.tail = current
        self.size -= 1
        return True

    def del_from_mid(self, index):
        if index < 0 or index >= self.size:
            return False
        if index == 0:
            return self.del_from_first()
        if index == self.size - 1:
            return self.del_from_end()

        current = self.head
        for _ in range(index - 1):
            current = current.next
        current.next = current.next.next
        self.size -= 1
        return True

    def print_list(self):
        current = self.head
        while current is not None:
            print(current.data, end=" ")
            current = current.next
        print()


    def get_length(self):
        return self.size

    def order_elements(self):
        pass

    def revert(self):
        pass