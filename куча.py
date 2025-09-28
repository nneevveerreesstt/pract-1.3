# Бинарная куча
class BinaryHeap:
    def __init__(self):
        self.heap = []
    
    def parent(self, i):
        return (i - 1) // 2

# Биномиальная куча
class BinomialTree:
    def __init__(self, key):
        self.key = key
        self.children = []

# Куча Фибоначчи 
class FibonacciHeap:
    def __init__(self):
        self.min_node = None
        self.trees = []