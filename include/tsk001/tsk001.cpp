#include "tsk001.hpp"

void tsk001(int limit_to) {
  for (int i = 0; i <= limit_to; i++) {
    if (i % 7 == 0) {
      std::cout << "кратно 7 - " << i << "; ";
    } else if (i % 2 == 0) {
      std::cout << "чет - " << i << "; ";
    } else if (i % 2 != 0) {
      std::cout << "нечет - " << i << "; ";
    }
  }
}