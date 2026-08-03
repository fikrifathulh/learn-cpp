#include <iostream>
#include <string>

// Function Overloading
void print(int value) {
  std::cout << "Integer: " << value << '\n';
}

void print(double value) {
  std::cout << "Double: " << value << '\n';
}

// Function Template
template<typename T>
void show(const T& value) {
  std::cout << value << '\n';
}

//Curiously Recurring Template Pattern (CRTP
template<typename Derived>
class Shape {
public:
  void draw() {
      static_cast<Derived*>(this)->drawImpl();
  }
};

class Circle : public Shape<Circle> {
public:
  void drawImpl() {
    std::cout << "Drawing Circle\n";
  }
};

class Square : public Shape<Square> {
public:
  void drawImpl() {
    std::cout << "Drawing Square\n";
  }
};

int main() {
  // Function Overloading
  print(42);
  print(3.14);

  std::cout << '\n';

  // Function Template
  show(100);
  show(2.718);
  show(std::string("Hello"));

  std::cout << '\n';

  // Curiously Recurring Template Pattern (CRTP)
  Circle circle;
  Square square;

  circle.draw();
  square.draw();

  return 0;
}
