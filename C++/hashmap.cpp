#include <iostream>
#include <unordered_map>
#include <string>

int main() {
    std::unordered_map<std::string, std::string> hashmap;
    hashmap["name"] = "Alice";
    hashmap["city"] = "Moscow";
    
    std::cout << hashmap["name"] << std::endl;  // Alice
    hashmap["city"] = "Saint Petersburg";
    
    return 0;
}
