class BinomialHeap:
    def __init__(self):
        self.trees = []
    
    def insert(self, value):
        new_heap = BinomialHeap()
        new_heap.trees.append(value)
        self.merge(new_heap)
    
    def merge(self, other):
        self.trees.extend(other.trees)
        self.trees.sort()

heap = BinomialHeap()
heap.insert(5)
heap.insert(2)
heap.insert(8)
