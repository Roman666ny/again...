#include <iostream>
#include <vector>
#include <algorithm>

class FibonacciHeap {
private:
    int* minNode = nullptr;
    std::vector<int> nodes;
    
public:
    void insert(int value) {
        nodes.push_back(value);
        if (minNode == nullptr || value < *minNode) {
            minNode = &nodes.back();
        }
    }
    
    int getMin() {
        return *minNode;
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
