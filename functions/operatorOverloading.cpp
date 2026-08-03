#include <iostream>

struct Vector2 {
  double x;
  double y;

  Vector2 operator+(const Vector2& other) const {
    return {x + other.x, y + other.y};
  }
};

int main() {
  Vector2 a{1.0, 2.0};
  Vector2 b{3.0, 4.0};

  Vector2 c = a + b;

  std::cout << "Vector Result: (" << c.x << ", " << c.y << ")\n\n";

  return 0;
}
