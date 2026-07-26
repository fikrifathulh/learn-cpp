#include <iostream>

int main() {
  std::cout << "For Loop\n";

  for (int i = 1; i <= 5; i++) {
    std::cout << i << " ";
  }

  std::cout << "\n\n";

  std::cout << "For Loop (Countdown)\n";

  for(int i = 5; i >= 1; i--) {
    std::cout << i << " ";
  }

  std::cout << "\n\n";

  std::cout << "For Loop (continue and break)\n";

  for(int i = 1; i <= 10; i++) {
    if (i == 3)
      continue; //Skip 3
    if (i == 8)
      continue; //Skip 8

    std::cout << i << " ";
  }

  std::cout << "\n\n";

  std::cout << "While Loop\n";

  int a = 1;

  while (a <= 5) {
    std::cout << a << " ";
    a++;
  }

  std::cout << "\n\n";
  
  std::cout << "Do-While Loop\n";

  int b = 1;

  do {
    std::cout << b << " ";
    b++;
  }
  while (b <= 5);

  std::cout << "\n\n";

  std::cout << "Do-While Loop\n";

  int c = 10;

  do {
    std::cout << c << " ";
    c++;
  }
  while (c < 5);

  return 0;
}
