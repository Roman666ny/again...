class FibonacciHeap:
    def __init__(self):
        self.min_node = None
        self.nodes = []
    
    def insert(self, value):
        self.nodes.append(value)
        if self.min_node is None or value < self.min_node:
            self.min_node = value

heap = FibonacciHeap()
heap.insert(5)
heap.insert(2)
heap.insert(8)
print(heap.min_node)  # 2
