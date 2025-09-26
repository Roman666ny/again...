#include <iostream>
#include <vector>
#include <stdexcept>

class FibonacciHeap {
private:
    int minNode;
    bool hasMin = false;
    std::vector<int> nodes;
    
public:
    void insert(int value) {
        nodes.push_back(value);
        if (!hasMin || value < minNode) {
            minNode = value;
            hasMin = true;
        }
    }
    
    int getMin() {
        if (!hasMin) throw std::runtime_error("Heap is empty");
        return minNode;
    }
};

int main() {
    FibonacciHeap heap;
    heap.insert(5);
    heap.insert(2);
    heap.insert(8);
    std::cout << heap.getMin() << std::endl;  // 2
    
    return 0;
}
