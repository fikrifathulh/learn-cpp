#include <iostream>

int main() {
  // goto (Performs an unconditional jump to a labeled statement within the same function)
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
