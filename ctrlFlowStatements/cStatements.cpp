#include <iostream>

int main() {
  // if
  int age = 20;
  if (age >= 18) {
    std::cout << "Adult" << "\n";
  }

  // if-else
  int temp = 15;
  if (temp >= 20) {
    std::cout << "Warm\n";
  } else {
    std::cout << "Cold\n";
  }

  //else-if
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

  //switch
  int day = 3;

  switch (day) {
    case 1:
      std::cout << "Monday\n";
      break;
    case 2:
      std::cout << "Tuesday\n";
      break;
    case 3:
      std::cout << "Wednesday\n";
      break;
    default:
      std::cout << "Unknown day\n";
  }

  return 0;
}
