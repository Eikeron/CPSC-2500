#include <iostream>

int main() {

  int counter = 0;
  int number = 0;

  std::cin >> number;

  while (!(number & 1)) {
    number >>= 1;
    counter++;
  }

  std::cout << counter << "\n";

  return 0;
}
