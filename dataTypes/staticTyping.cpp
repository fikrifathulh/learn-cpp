#include <iostream>
#include <string>

int multiply();
void sayThis();

int multiply(int a, int b) {
  return a * b;
}

void say(std::string word) {
  std::cout << word << "\n";
}

int main() {
  std::cout << multiply(2, 5) << "\n";
  say("apple");

  return 0;
}
