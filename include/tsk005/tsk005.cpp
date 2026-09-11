#include "tsk005.hpp"

int tsk051(int income, int delay, int fine, int salaryPer100CodeString) {
  int penaltyCount = delay / 3;
  int penalty = penaltyCount * fine;
  int requiredIncome = income + penalty;
  int lines = (requiredIncome * 100) / salaryPer100CodeString;

  return lines;
}

int tsk052(int linesCode, int income, int fine, int salaryPer100CodeString) {
  int salary = (linesCode / 100) * salaryPer100CodeString;
  int moneyForFine = salary - income;
  int penaltyCount = moneyForFine / fine;
  int delay = penaltyCount * 3;

  return delay;
}