#include <bitset>
#include <iostream>

int main() {
  unsigned int a = 5; // 00000101
  unsigned int b = 3; // 00000011

  std::cout << "a= " << a << " (" << std::bitset<8>(a) << ")\n"; // 5 (00000101)
  std::cout << "b= " << b << " (" << std::bitset<8>(b) << ")\n"; // 3 (00000011)

  std::cout << "Bitwise AND (&):\n"; // AND (&) returns 1 only if both corresponding bits are 1
  std::cout << "a & b = " << (a & b) << " (" << std::bitset<8>(a & b) << ")\n\n"; // return 1 (00000001)

  std::cout << "Bitwise OR (|):\n"; // OR (|) returns 1  if either bit is 1
  std::cout << "a | b = " << (a | b) << " (" << std::bitset<8>(a | b) << ")\n\n"; // return 7 (00000111)

  std::cout << "Bitwise XOR (^):\n"; // XOR (^) returns 1 only when the bits are different
  std::cout << "a ^ b = " << (a ^ b) << " (" << std::bitset<8>(a ^ b) << ")\n\n"; // return 6 (00000110)

  std::cout << "Bitwise NOT (~):\n"; // NOT (~) flips every bit
  std::cout << "~a = " << (~a) << " (" << std::bitset<32>(~a) << ")\n\n"; // return 4294967290 (11111111111111111111111111111010)
  
  std::cout << "Left Shift (<<):\n"; // Left Shift (<<) moves bits to the left
  std::cout << "a << 1 = " << (a << 1) << " (" << std::bitset<8>(a << 1) << ")\n\n"; // return 10 (00000101 -> 00001010)

  std::cout << "Right Shift (>>):\n"; // Right Shift (>>) moves bits to the right
  std::cout << "a >> 1 = " << (a >> 1) << " (" << std::bitset<8>(a >> 1) << ")\n\n"; // return 2 (00000011 -> 00000001)

  unsigned int c = a; // 00000101

  std::cout << "c= " << c << " (" << std::bitset<8>(c) << ")\n"; // 5 (00000101)

  std::cout << "AND Assignment (&=):\n";
  c &= b; // AND (&) compound assignment form
  std::cout << "c &= b -> " << c << " (" << std::bitset<8>(c) << ")\n\n"; // return 1 (00000001)

  std::cout << "OR Assignment (|=):\n";
  c = a;
  c |= b; // OR (|) compound assignment form
  std::cout << "c |= b -> " << c << " (" << std::bitset<8>(c) << ")\n\n"; // return 7 (00000111)

  std::cout << "XOR Assignment (^=):\n";
  c = a;
  c ^= b; // XOR (^) compound assignment form
  std::cout << "c ^= b -> " << c << " (" << std::bitset<8>(c) << ")\n\n"; // return 6 (00000110)

  std::cout << "Left Shift Assignment (<<=):\n";
  c = a;
  c <<= 1; // Left Assignment (<<) compound assignment form
  std::cout << "c <<= 1 -> " << c << " (" << std::bitset<8>(c) << ")\n\n"; // return 10 (00000101 -> 00001010)

  std::cout << "Right Shift Assignment (>>=):\n";
  c = a;
  c >>= 1; // Right Assignment (>>) compound assignment form
  std::cout << "c >>= 1 -> " << c << " (" << std::bitset<8>(c) << ")\n\n"; // return 2 (00001010 -> 00000010)

  return 0;
}
