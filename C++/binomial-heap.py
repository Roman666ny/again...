#include <iostream>
#include <vector>
#include <algorithm>

class BinomialHeap {
private:
    std::vector<int> trees;
    
public:
    void insert(int value) {
        BinomialHeap newHeap;
        newHeap.trees.push_back(value);
        merge(newHeap);
    }
    
    void merge(BinomialHeap& other) {
        trees.insert(trees.end(), other.trees.begin(), other.trees.end());
        std::sort(trees.begin(), trees.end());
    }
};

int main() {
    BinomialHeap heap;
    heap.insert(5);
    heap.insert(2);
    heap.insert(8);
    
    return 0;
}
