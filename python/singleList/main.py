from singleList import SingleLinkedList;

sll = SingleLinkedList()

sll.add_to_first(10)
sll.add_to_end(20)
sll.add_to_mid(1, 15)

sll.print_list()  #  10 15 20

sll.del_from_first()
sll.del_from_end()

sll.print_list()  #  15

print("Length:", sll.get_length())  #  1