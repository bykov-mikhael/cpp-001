#include "tsk003.hpp"

int tsk003() {
  int total{0}, input001;

  std::cout << "Введите число: ";

  do {
    std::cin >> input001;
    total += input001;
  } while (input001 != 0);

  return total;
}