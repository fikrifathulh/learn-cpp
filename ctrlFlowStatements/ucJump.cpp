#include <iostream>

int main() {
  // goto
  int count = 1;

  loop:
    std::cout <<  "Count = " << count << "\n";
    ++count;
    if (count <= 3) {
      goto loop;
    }

    std::cout << "Done\n";

  return 0;
}
