#include <iostream>

int main() {
  int x = 10;
  int y = 3;

  std::cout << (x + y) << "\n"; // The addition result is 13
  std::cout << (x - y) << "\n"; // The substraction result is 7
  std::cout << (x * y) << "\n"; // The multiplication result is 30
  std::cout << (x / y) << "\n"; // The division result is 3 (integer division!)
  std::cout << (x % y) << "\n"; // The modulus result is 1

  int z = 5;
  ++z;
  std::cout << z << "\n"; // The increment result is 6
  --z;
  std::cout << z << "\n"; // The decrement result is 5
  
  return 0;
}
