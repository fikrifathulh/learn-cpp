#include <iostream>
#include <string>
#include <map>
#include <any>
#include <variant>

// std::any example
// Config can hold ANY type
std::map<std::string, std::any> config;

// Function to get a value safely
template<typename T>
T get(const std::string& key) {
    return std::any_cast<T>(config[key]);
}

// std::variant example
// A value that can be: int, double, or string
using CalcValue = std::variant<int, double, std::string>;

// Function that processes different types
void process(CalcValue val) {
    // Visit the value - like a type-safe switch statement
    std::visit([](auto&& v) {
        using T = std::decay_t<decltype(v)>;

        if constexpr (std::is_same_v<T, int>) {
            std::cout << "Integer: " << v * 2 << "\n";
        }
        else if constexpr (std::is_same_v<T, double>) {
            std::cout << "Double: " << v * 1.5 << "\n";
        }
        else if constexpr (std::is_same_v<T, std::string>) {
            std::cout << "String: " << v << " (length: " << v.length() << ")\n";
        }
    }, val);
}

int main() {
    // Load config (imagine this came from a JSON file)
    config["timeout"] = 30;                          // int
    config["server"] = std::string("localhost");    // string
    config["debug"] = true;                         // bool
    config["pi"] = 3.14159;                         // double
    
    // Use the config
    int timeout = get<int>("timeout");
    std::string server = get<std::string>("server");
    bool debug = get<bool>("debug");
    
    std::cout << "std::any example output" << "\n";

    std::cout << "Server: " << server << "\n";
    std::cout << "Timeout: " << timeout << "s\n";
    std::cout << "Debug: " << (debug ? "ON" : "OFF") << "\n";
    
    // This throws an exception - you must know the exact type!
    // int pi = get<int>("pi");  // ERROR: stored as double, not int!
    
    // Safe way: check first
    if (config["pi"].type() == typeid(double)) {
        double pi = get<double>("pi");
        std::cout << "Pi: " << pi << "\n";
    }

    std::cout << "\n";

    std::cout << "std::variant example output" << "\n";

    process(42);                    // Integer: 84
    process(3.14);                  // Double: 4.71
    process(std::string("Hello"));  // String: Hello (length: 5)

    return 0;
}
