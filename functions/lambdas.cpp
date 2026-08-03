#include <iostream>

int main() {
  // Lambda
  int multiplier = 5;

  auto multiply = [multiplier](int value) { return value * multiplier;  };

  std::cout << "Lambda Result: "
            << multiply(10)
            << "\n\n";

  return 0;
}
