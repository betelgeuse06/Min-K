#include <stdio.h>

int med3(int a, int b, int c) {
  if (a >= b) {
    if (b >= c) {
      return b;
    } else if (a <= c) {
      return a;
    } else {
      return c;
    }
  } else if (a > c) {
    return a;
  } else if (b > c) {
    return c;
  } else {
    return b;
  }
}

int main(int argc, char const *argv[]) {
  printf("med(%d, %d, %d) = %d\n", 3, 2, 1, med3(3, 2, 1));
  printf("med(%d, %d, %d) = %d\n", 3, 2, 2, med3(3, 2, 2));
  printf("med(%d, %d, %d) = %d\n", 3, 1, 2, med3(3, 1, 2));
  printf("med(%d, %d, %d) = %d\n", 3, 2, 3, med3(3, 2, 3));
  printf("med(%d, %d, %d) = %d\n", 2, 1, 3, med3(2, 1, 3));
  printf("med(%d, %d, %d) = %d\n", 3, 3, 2, med3(3, 3, 2));
  printf("med(%d, %d, %d) = %d\n", 3, 3, 3, med3(3, 3, 3));
  printf("med(%d, %d, %d) = %d\n", 2, 2, 3, med3(2, 2, 3));
  printf("med(%d, %d, %d) = %d\n", 2, 3, 2, med3(2, 3, 2));
  printf("med(%d, %d, %d) = %d\n", 1, 3, 2, med3(1, 3, 2));
  printf("med(%d, %d, %d) = %d\n", 2, 3, 3, med3(2, 3, 3));
  printf("med(%d, %d, %d) = %d\n", 1, 2, 3, med3(1, 2, 3));
  return 0;
}
