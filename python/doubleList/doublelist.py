class Node:
    def __init__(self, data, next_node=None, prev_node=None):
        self.data = data
        self.next = next_node
        self.prev = prev_node

class DoubleLinkedList:
    def __init__(self):
        self.head = None
        self.tail = None
        self.size = 0

    def make_node(self, value, next_node=None, prev_node=None):
        return Node(value, next_node, prev_node)

    def add_to_first(self, value):
        new_node = self.make_node(value, self.head)
        if self.head:
            self.head.prev = new_node
        else:
            self.tail = new_node
        self.head = new_node
        self.size += 1
        return True

    def add_to_end(self, value):
        new_node = self.make_node(value, None, self.tail)
        if self.tail:
            self.tail.next = new_node
        else:
            self.head = new_node
        self.tail = new_node
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
        
        new_node = self.make_node(value, current.next, current)
        current.next.prev = new_node
        current.next = new_node
        self.size += 1
        return True

    def del_from_first(self):
        if not self.head:
            return False
        self.head = self.head.next
        if self.head:
            self.head.prev = None
        else:
            self.tail = None
        self.size -= 1
        return True

    def del_from_end(self):
        if not self.tail:
            return False
        self.tail = self.tail.prev
        if self.tail:
            self.tail.next = None
        else:
            self.head = None
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
        for _ in range(index):
            current = current.next
        
        current.prev.next = current.next
        current.next.prev = current.prev
        self.size -= 1
        return True

    def print_list(self):
        current = self.head
        while current:
            print(current.data, end=" <-> ")
            current = current.next
        print("None")
        return True

    def get_length(self):
        return self.size

    def special_add(self, index):
        return self.add_to_mid(index, 0)  
