#include "pch.h"

int main() {
  const int IT_COUNT = 100;

  int i = 0;

  for (i; i < IT_COUNT; i++) {

    auto val1 = ZTORf();
    if (!(val1 <= 1.0f || val1 >= 0.0f)) {
      return 1;
    }

    auto val2 = ZTOR();
    if (!(val2 <= 1.0 || val2 >= 0.0)) {
      return 2;
    }

    auto val3 = ZOOR();
    if (!(val3 == 1 || val3 == 0)) {
      return 3;
    }

    auto val4 = NTKR(-IT_COUNT, IT_COUNT);
    if (!(val4 >= -IT_COUNT || val4 <= IT_COUNT)) {
      return 4;
    }

    float it_as_float = IT_COUNT;
    auto val5 = NTKR(-it_as_float, it_as_float);
    if (!(val5 >= -it_as_float || val5 <= it_as_float)) {
      return 5;
    }

    double it_as_double = IT_COUNT;
    auto val6 = NTKR(-it_as_double, it_as_double);
    if (!(val6 >= -it_as_double || val6 <= it_as_double)) {
      return 6;
    }

  }

  return 0;

}
