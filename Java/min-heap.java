import java.util.PriorityQueue;

public class Main {
    public static void main(String[] args) {
        PriorityQueue<Integer> heap = new PriorityQueue<>();
        heap.add(5);
        heap.add(2);
        heap.add(8);
        
        System.out.println(heap.poll());  // 2 (минимальный элемент)
    }
}
