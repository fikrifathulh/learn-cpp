#include <iostream>

int main() {
  int x = 5;
  int y = 3;

  std::cout << (x > y && x <= 5) << "\n";
  // returns true (1) because 5 is greater than 3 AND 5 is less than equal 5

  std::cout << (x > y || x < 5) << "\n";
  // returns true (1) because one of the conditions are true

  std::cout << (!(x > y && x <= 5)) << "\n";
  // returns false (0) because ! (not) is used to reverse the result

  return 0;
}
