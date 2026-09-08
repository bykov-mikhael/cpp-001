#include <iostream>

int main() {
  /** Посчитать все числа от 0 до введеного числа:
   *  - четные
   *  - нечетные
   *  - кратные 7
   */
  //   std::cout << "Введите число: ";

  //   int digit001;
  //   std::cin >> digit001;

  //   for (int i = 0; i <= digit001; i++) {
  //     if (i % 7 == 0) {
  //       std::cout << "кратно 7 - " << i << "; ";
  //     } else if (i % 2 == 0) {
  //       std::cout << "чет - " << i << "; ";
  //     } else if (i % 2 != 0) {
  //       std::cout << "нечет - " << i << "; ";
  //     }
  //   }

  /** Пользователь вводит две границы лдиапазона.Посчитать сумму
              всех чисел диапазона */

  int limit001{0}, limit002{0}, sum{0};

  std::cout << "limit 001 ";
  std::cin >> limit001;

  std::cout << "limit 002 ";
  std::cin >> limit002;

  for (int i = limit001; i <= limit002; i++) {
    sum += i;
  }

  std::cout << "Сумма чисел: " << sum << std::endl;

  std::cout << std::endl;

  return 0;
}