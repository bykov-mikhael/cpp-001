#include <math.h>

#include <cmath>
#include <cstdlib>
#include <iostream>

#include "tsk001/tsk001.hpp"
#include "tsk002/tsk002.hpp"
#include "tsk003/tsk003.hpp"
#include "tsk004/tsk004.hpp"

constexpr int delayFine = 20;
constexpr int incomePer100CodeString = 50;

int main() {
  std::cout << "tsk001" << std::endl;
  std::cout << "Введите число: ";
  int digit001;
  std::cin >> digit001;
  tsk001(digit001);

  std::cout << "tsk002" << std::endl;

  int limit001, limit002;

  std::cout << "limit 001: ";
  std::cin >> limit001;

  std::cout << "limit 002: ";
  std::cin >> limit002;

  std::cout << "Сумма чисел: " << tsk002(limit001, limit002) << std::endl;

  std::cout << "tsk003" << std::endl;
  int sum = tsk003();
  std::cout << "Сумма чисел: " << sum << std::endl;

  std::cout << "tsk004" << std::endl;
  int x, y;

  std::cout << "x: ";
  std::cin >> x;

  std::cout << "y: ";
  std::cin >> y;

  std::cout << "x в степени y: " << tsk004(x, y) << std::endl;

  std::cout << "tsk005" << std::endl;
  /** Вася работает программистом и поулчает 50$ за каждые 100 строк кода. За
   * каждое третье опоздание на работу Васю штрафуют на 20$. Реализовать меню:
   */
  int choice, income, string, delay;

  std::system("clear");

  std::cout << "========== ГЛАВНОЕ МЕНЮ ==========" << std::endl;
  std::cout << "1. Ввести желаемый доход Васи, кол-во опозданий, посчитать "
               "сколько сколько строк кода надо написать"
            << std::endl;
  std::cout << "2. Ввести необходимое кол-во строк кода, написанное Васей и "
               "желаемый объем ЗП; посчитать сколько раз Вася может опоздать"
            << std::endl;
  std::cout << "3. Выход" << std::endl;
  std::cout << "==================================" << std::endl;

  std::cout << "Выберите пункт: ";
  std::cin >> choice;

  switch (choice) {
    case 1:
      std::cout << "-=Рассчёт кол-ва строк кода=-" << std::endl;

      std::cout << "Введите ожидаемый доход: ";
      std::cin >> income;

      std::cout << "Введите предполагаемое кол-во опозданий: ";
      std::cin >> delay;

      std::cout << "Необходимо написать "
                << (income - delay * delayFine) / incomePer100CodeString
                << " строк кода" << std::endl;
      break;
    case 2:
      std::cout << "Рассчёт кол-ва опозданий" << std::endl;
      int income, delay;

      std::cout << "Введите ожидаемый доход: ";
      std::cin >> income;

      std::cout << "Введите требуемое кол-во строк: ";
      std::cin >> string;

      std::cout << (string * incomePer100CodeString - income) / delayFine
                << " опозданий может быть" << std::endl;

      break;
    case 3:
      std::cout << "Выход" << std::endl;
      // Здесь код настроек
      break;
    default:
      std::cout << "Неверный выбор! Попробуйте снова." << std::endl;
  }

  if (choice != 3) {
    std::cout << "\nНажмите Enter для продолжения...";
    std::cin.ignore();
    std::cin.get();
  }
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

  //   int limit001{0}, limit002{0}, sum{0};

  //   std::cout << "limit 001: ";
  //   std::cin >> limit001;

  //   std::cout << "limit 002: ";
  //   std::cin >> limit002;

  //   for (int i = limit001; i <= limit002; i++) {
  //     sum += i;
  //   }

  //   std::cout << "Сумма чисел: " << sum << std::endl;

  /** Пользователь с клавиатуры вводит числа.Посчитать сумму и вывести на
      экран, как только пользователь введет 0 */

  //   int total{0}, input001;

  //   std::cout << "Введите число: ";

  //   do {
  //     std::cin >> input001;
  //     total += input001;
  //   } while (input001 != 0);

  //   std::cout << "Сумма чисел: " << total << std::endl;

  /** Напишите программу, которая запрашивает два целых числа х и у, после чего
   * вычисляет и выводит значение х в степени у */

  //   int x, y;

  //   std::cout << "Введите х: ";
  //   std::cin >> x;

  //   std::cout << "Введите y: ";
  //   std::cin >> y;

  //   std::cout << "x в степени у = " << pow(x, y) << std::endl;

  /** Вася работает программистом и поулчает 50$ за каждые 100 строк кода. За
   * каждое третье опоздание на работу Васю штрафуют на 20$. Реализовать меню:
   */
  // int choice;

  // std::system("clear");

  // std::cout << "========== ГЛАВНОЕ МЕНЮ ==========" << std::endl;
  // std::cout << "1. Ввести желаемый доход Васи, кол-во опозданий, посчитать "
  //              "сколько сколько строк кода надо написать"
  //           << std::endl;
  // std::cout << "2. Ввести необходимое кол-во строк кода, написанное Васей и "
  //              "желаемый объем ЗП; посчитать сколько раз Вася может опоздать"
  //           << std::endl;
  // std::cout << "3. Выход" << std::endl;
  // std::cout << "==================================" << std::endl;

  // std::cout << "Выберите пункт: ";
  // std::cin >> choice;

  // switch (choice) {
  //   case 1:
  //     std::cout << "-=Рассчёт кол-ва строк кода=-" << std::endl;
  //     int income, delay;

  //     std::cout << "Введите ожидаемый доход: ";
  //     std::cin >> income;

  //     std::cout << "Введите предполагаемое кол-во опозданий: ";
  //     std::cin >> delay;

  //     std::cout << "Необходимо написать " << income << " строк кода"
  //               << std::endl;
  //     break;
  //   case 2:
  //     std::cout << "Рассчёт кол-ва опозданий" << std::endl;
  //     // Здесь код загрузки
  //     break;
  //   case 3:
  //     std::cout << "Выход" << std::endl;
  //     // Здесь код настроек
  //     break;
  //   default:
  //     std::cout << "Неверный выбор! Попробуйте снова." << std::endl;
  // }

  // if (choice != 3) {
  //   std::cout << "\nНажмите Enter для продолжения...";
  //   std::cin.ignore();
  //   std::cin.get();
  // }

  std::cout << std::endl;

  return 0;
}