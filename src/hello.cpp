#include "hello.h"
#include <iostream>

namespace Hello {
void World() {
  std::cout << "Hello World\n";
  std::cout << "Input: ";
  std::string data;
  std::getline(std::cin, data);
  std::cout << "Output: " << data << "\n\n";
}
}  // namespace Hello