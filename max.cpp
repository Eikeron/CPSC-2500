#include <iostream>
#include <vector>
#include <stdint.h>

typedef std::vector<char> v1;

int main() {

  int input = 0;
  v1 vec;
  int largest = 0;

  std::cout << "Input numbers" << "\n";

  while (input >= 0) {
    std::cin >> input;
    vec.push_back(input);
  }

  // seek largest value
  // vector front = value, begin = iterator?
  largest = vec.front();
  for (unsigned int i = 0; i < vec.size(); i++)
    {
      if (vec.at(i) > largest)
        largest = vec.at(i);
    }

  std::cout << largest << "\n";

  return 0;
}
