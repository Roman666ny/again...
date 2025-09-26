#include <iostream>
#include <queue>
#include <vector>

int main() {
    std::priority_queue<int, std::vector<int>, std::greater<int>> heap;
    heap.push(5);
    heap.push(2);
    heap.push(8);
    
    std::cout << heap.top() << std::endl;  // 2
    heap.pop();
    
    return 0;
}
