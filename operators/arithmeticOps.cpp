#include <iostream>

int main() {
  int x = 10;
  int y = 3;

  std::cout << (x + y) << "\n"; //13
  std::cout << (x - y) << "\n"; //7
  std::cout << (x * y) << "\n"; //30
  std::cout << (x / y) << "\n"; //3 (integer division!)
  std::cout << (x % y) << "\n"; //1

  int z = 5;
  ++z;
  std::cout << z << "\n"; //6
  --z;
  std::cout << z << "\n"; //5
  
  return 0;
}
