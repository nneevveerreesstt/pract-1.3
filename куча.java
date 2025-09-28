// Бинарная куча 
class BinaryHeap {
    private int[] heap;
    private int size;
    public BinaryHeap(int capacity) {
        heap = new int[capacity];
    }
}

// Биномиальная куча 
class BinomialHeap<T extends Comparable<T>> {
    private List<BinomialTree<T>> trees;
}

// Куча Фибоначчи 
class FibonacciHeap<T> {
    private FibonacciNode<T> minNode;
    private int size;
}