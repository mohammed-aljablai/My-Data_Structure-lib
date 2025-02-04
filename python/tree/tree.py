class Node:
    def __init__(self, value):
        self.data = value
        self.left = None
        self.right = None

class Tree:
    def __init__(self):
        self.size = 0
        self.main_root = None

    def _insert(self, root, value):
        if root is None:
            return Node(value)
        if value < root.data:
            root.left = self._insert(root.left, value)
        else:
            root.right = self._insert(root.right, value)
        return root

    def insert(self, value):
        self.main_root = self._insert(self.main_root, value)
        self.size += 1
        return True

    def _find_min(self, root):
        while root.left is not None:
            root = root.left
        return root

    def _delete(self, root, value):
        if root is None:
            return root
        if value < root.data:
            root.left = self._delete(root.left, value)
        elif value > root.data:
            root.right = self._delete(root.right, value)
        else:
            if root.left is None:
                return root.right
            elif root.right is None:
                return root.left
            temp = self._find_min(root.right)
            root.data = temp.data
            root.right = self._delete(root.right, temp.data)
        return root

    def delete(self, value):
        self.main_root = self._delete(self.main_root, value)
        self.size -= 1
        return True

    def _is_root_exist(self, root, value):
        if root is None:
            return False
        if root.data == value:
            return True
        elif value < root.data:
            return self._is_root_exist(root.left, value)
        else:
            return self._is_root_exist(root.right, value)

    def is_root_exist(self, value):
        return self._is_root_exist(self.main_root, value)

    def _search_for(self, root, value):
        if root is None or root.data == value:
            return root
        if value < root.data:
            return self._search_for(root.left, value)
        return self._search_for(root.right, value)

    def search_for(self, value):
        return self._search_for(self.main_root, value)

    def _preorder(self, root):
        if root:
            print(root.data, end=" ")
            self._preorder(root.left)
            self._preorder(root.right)

    def _inorder(self, root):
        if root:
            self._inorder(root.left)
            print(root.data, end=" ")
            self._inorder(root.right)

    def _postorder(self, root):
        if root:
            self._postorder(root.left)
            self._postorder(root.right)
            print(root.data, end=" ")

    def preorder(self):
        self._preorder(self.main_root)
        print()

    def inorder(self):
        self._inorder(self.main_root)
        print()

    def postorder(self):
        self._postorder(self.main_root)
        print()

    def find_min(self):
        return self._find_min(self.main_root).data if self.main_root else None

