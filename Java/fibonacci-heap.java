class FibonacciHeap {
    private Integer minNode = null;
    private List<Integer> nodes = new ArrayList<>();
    
    public void insert(int value) {
        nodes.add(value);
        if (minNode == null || value < minNode) {
            minNode = value;
        }
    }
    
    public Integer getMin() {
        return minNode;
    }
}

public class Main {
    public static void main(String[] args) {
        FibonacciHeap heap = new FibonacciHeap();
        heap.insert(5);
        heap.insert(2);
        heap.insert(8);
        System.out.println(heap.getMin());  // 2
    }
}

// Дементеев Роман, все права защищены xd
