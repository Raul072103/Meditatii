#include <iostream>

void testFunction() {
  std::cout << "Test function!\n";
}

int main() {
  int a = 3;
  std::cout << a << "\n";
  std::cout << &a << "\n";
  return 0;
}