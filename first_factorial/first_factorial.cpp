#include <iostream>

int first_factorial(int num) {
  int result = 1;

  for (int index = 1; index <= num; index++) {
    result *= index;
  }

  return result;
}

int main() {
  int num = 3;

  int result = first_factorial(num);

  std::cout << "Result: " << result << "\n";
}
