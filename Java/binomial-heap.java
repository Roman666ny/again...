import java.util.*;

class BinomialHeap {
    private List<Integer> trees = new ArrayList<>();
    
    public void insert(int value) {
        BinomialHeap newHeap = new BinomialHeap();
        newHeap.trees.add(value);
        merge(newHeap);
    }
    
    public void merge(BinomialHeap other) {
        trees.addAll(other.trees);
        Collections.sort(trees);
    }
}

public class Main {
    public static void main(String[] args) {
        BinomialHeap heap = new BinomialHeap();
        heap.insert(5);
        heap.insert(2);
        heap.insert(8);
    }
}
