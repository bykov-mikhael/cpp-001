#include "tsk004.hpp"

int tsk004() {
  int x, y;

  std::cout << "Введите х: ";
  std::cin >> x;

  std::cout << "Введите y: ";
  std::cin >> y;

  return pow(x, y);
}