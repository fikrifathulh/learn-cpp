#include <bitset>
#include <iostream>

int main() {
  unsigned int a = 5; //00000101
  unsigned int b = 3; //00000011

  std::cout << "a= " << a << " (" << std::bitset<8>(a) << ")\n";
  std::cout << "b= " << b << " (" << std::bitset<8>(b) << ")\n";

  std::cout << "Bitwise AND (&):\n";
  std::cout << "a & b = " << (a & b) << " (" << std::bitset<8>(a & b) << ")\n\n";

  std::cout << "Bitwise OR (|):\n";
  std::cout << "a | b = " << (a | b) << " (" << std::bitset<8>(a | b) << ")\n\n";

  std::cout << "Bitwise XOR (^):\n";
  std::cout << "a ^ b = " << (a ^ b) << " (" << std::bitset<8>(a ^ b) << ")\n\n";

  std::cout << "Bitwise NOT (~):\n";
  std::cout << "~a = " << (~a) << " (" << std::bitset<32>(~a) << ")\n\n";
  
  std::cout << "Left Shift (<<):\n";
  std::cout << "a << 1 = " << (a << 1) << " (" << std::bitset<8>(a << 1) << ")\n\n";

  std::cout << "Right Shift (>>):\n";
  std::cout << "a >> 1 = " << (a >> 1) << " (" << std::bitset<8>(a >> 1) << ")\n\n";

  unsigned int c = a; //00000101

  std::cout << "c= " << c << " (" << std::bitset<8>(c) << ")\n";

  std::cout << "AND Assignment (&=):\n";
  c &= b;
  std::cout << "c &= b ->" << c << " (" << std::bitset<8>(c) << ")\n\n";

  std::cout << "OR Assignment (|=):\n";
  c = a;
  c |= b;
  std::cout << "c |= b ->" << c << " (" << std::bitset<8>(c) << ")\n\n";

  std::cout << "XOR Assignment (^=):\n";
  c = a;
  c ^= b;
  std::cout << "c ^= b ->" << c << " (" << std::bitset<8>(c) << ")\n\n";

  std::cout << "Left Shift Assignment (<<=):\n";
  c = a;
  c <<= 1;
  std::cout << "c <<= 1 ->" << c << " (" << std::bitset<8>(c) << ")\n\n";

  std::cout << "Right Shift Assignment (>>=):\n";
  c = a;
  c >>= 1;
  std::cout << "c >>= 1 ->" << c << " (" << std::bitset<8>(c) << ")\n\n";

  return 0;
}
