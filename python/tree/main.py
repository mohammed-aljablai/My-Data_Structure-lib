from tree import Tree

t = Tree()
t.insert(50)
t.insert(30)
t.insert(70)
t.insert(20)
t.insert(40)
t.insert(60)
t.insert(80)

t.inorder()   # 20 30 40 50 60 70 80
t.preorder()  # 50 30 20 40 70 60 80
t.postorder() # 20 40 30 60 80 70 50

t.delete(50)
t.inorder()  # 20 30 40 60 70 80

print(t.search_for(70))  # Node object
print(t.is_root_exist(25))  # False
print(t.find_min())  # 20
