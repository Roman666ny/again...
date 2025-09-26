import java.util.HashMap;

public class Main {
    public static void main(String[] args) {
        HashMap<String, Object> hashmap = new HashMap<>();
        hashmap.put("name", "Alice");
        hashmap.put("age", 25);
        hashmap.put("city", "Moscow");
        
        System.out.println(hashmap.get("name"));  // Alice
        hashmap.put("age", 26);  // Изменение значения
    }
}
