#include <iostream>
#include <string>


// Function declarations
void sayHello();
void greet(std::string name);
int square(int x);
double average(double a, double b);
bool isEven(int x);
void incrementByValue(int x);
void incrementByReference(int& x);
void printName(const std::string& name);
void greetDefault(std::string name = "Guest");
int add(int a, int b);
double add(double a, double b);
void countdown(int n);

// Function definitions
void sayHello() {
  std::cout << "Hello!\n";
}

void greet(std::string name) {
  std::cout << "Hello, " << name << "!\n";
}

int square(int x) {
    return x * x;
}

double average(double a, double b) {
    return (a + b) / 2.0;
}

bool isEven(int x) {
    return x % 2 == 0;
}

void incrementByValue(int x) {
    x++;
}

void incrementByReference(int& x) {
    x++;
}

void printName(const std::string& name) {
  std::cout << "Name: " << name << '\n';
}

void greetDefault(std::string name) {
  std::cout << "Welcome, " << name << "!\n";
}

int add(int a, int b) {
    return a + b;
}

double add(double a, double b) {
    return a + b;
}

void countdown(int n) {
    if (n == 0)
        return;

    std::cout << n << ' ';
    countdown(n - 1);
}

int main() {
    std::cout << "=== Function without parameters ===\n";
    sayHello();

    std::cout << "\n=== Function with parameters ===\n";
    greet("Alice");

    std::cout << "\n=== Returning values ===\n";
    std::cout << "Square of 5: " << square(5) << '\n';
    std::cout << "Average of 10 and 20: " << average(10, 20) << '\n';

    std::cout << "\n=== Boolean return ===\n";
    std::cout << "Is 8 even? " << std::boolalpha << isEven(8) << '\n';

    std::cout << "\n=== Pass by value ===\n";
    int a = 5;
    incrementByValue(a);
    std::cout << "a = " << a << '\n';

    std::cout << "\n=== Pass by reference ===\n";
    incrementByReference(a);
    std::cout << "a = " << a << '\n';

    std::cout << "\n=== Const reference ===\n";
    std::string name = "Bob";
    printName(name);

    std::cout << "\n=== Default argument ===\n";
    greetDefault();
    greetDefault("Charlie");

    std::cout << "\n=== Function overloading ===\n";
    std::cout << "add(2, 3) = " << add(2, 3) << '\n';
    std::cout << "add(2.5, 3.7) = " << add(2.5, 3.7) << '\n';

    std::cout << "\n=== Recursion ===\n";
    countdown(5);
    std::cout << '\n';

    return 0;
}
