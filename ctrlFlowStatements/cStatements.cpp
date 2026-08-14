#include <iostream>

int main() {
  // if (An if statement executes a block of code only if a condition evaluates to true)
  int age = 20;
  if (age >= 18) {
    std::cout << "Adult" << "\n";
  }

  // if-else (When the condition is false, execute another block)
  int temp = 15;
  if (temp >= 20) {
    std::cout << "Warm\n";
  } else {
    std::cout << "Cold\n";
  }

  //else-if (Use this when there are several possible conditions)
  int score = 87;

  if (score >= 90) {
    std::cout << "A\n";
  } else if (score >= 80) {
    std::cout << "B\n";
  } else if (score >= 70) {
    std::cout << "C\n";
  } else {
    std::cout << "Fail\n";
  }

  //switch (A switch compares one value against several constant values)
  int day = 3;

  switch (day) {
    case 1:
      std::cout << "Monday\n";
      break; // without break, execution continues into the next case
    case 2:
      std::cout << "Tuesday\n";
      break;
    case 3:
      std::cout << "Wednesday\n";
      break;
    default: // default executed when no case matches
      std::cout << "Unknown day\n";
  }

  return 0;
}
