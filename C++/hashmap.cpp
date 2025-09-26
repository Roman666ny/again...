#include <iostream>
#include <unordered_map>
#include <string>

int main() {
    std::unordered_map<std::string, std::any> hashmap;
    hashmap["name"] = std::string("Alice");
    hashmap["age"] = 25;
    hashmap["city"] = std::string("Moscow");
    
    std::cout << std::any_cast<std::string>(hashmap["name"]) << std::endl;
    hashmap["age"] = 26;
    
    return 0;
}
