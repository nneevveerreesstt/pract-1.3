// Бинарная куча 
template<typename T>
class BinaryHeap {
private:
    std::vector<T> data;
    void heapify_up(int index);
};

// Биномиальная куча 
template<typename T>
class BinomialHeap {
    struct Node {
        T value;
        std::vector<Node*> children;
    };
    std::vector<Node*> trees;
};

// Куча Фибоначчи 
template<typename T>
class FibonacciHeap {
    struct Node {
        T key;
        Node* parent;
        std::list<Node*> children;
    };
    Node* min_node;
};