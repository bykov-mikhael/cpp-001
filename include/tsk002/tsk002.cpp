#include "tsk002.hpp"

int tsk002(int limit_from, int limit_to) {
  int sum{0};

  for (int i = limit_from; i <= limit_to; i++) {
    sum += i;
  }

  return sum;
}