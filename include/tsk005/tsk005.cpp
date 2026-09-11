#include "tsk005.hpp"

int tsk051(int income, int delay, int delayFine, int incomePer100CodeString) {
  return (100 * (income - delay * delayFine / 3) / incomePer100CodeString);
}

int tsk052(int stringCode, int income, int delayFine,
           int incomePer100CodeString) {
  return (stringCode * incomePer100CodeString - income) / delayFine;
}