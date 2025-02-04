from doubleList import DoubleLinkedList;


dll = DoubleLinkedList()
dll.add_to_first(10)
dll.add_to_end(20)
dll.add_to_mid(1, 15)
dll.print_list()  # 10 <-> 15 <-> 20 <-> None

dll.del_from_mid(1)
dll.print_list()  # 10 <-> 20 <-> None
