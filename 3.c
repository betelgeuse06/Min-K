#include <stdio.h>

int main(int argc, char const *argv[]) {
  int i, n;
  int sum;
  puts("1���� n������ ���� ���մϴ�.");
  printf("n�� �� : ");
  scanf("%d", &n);
  sum = 0;
  i = 1;
  while (i <= n) {
    sum += i;
    i++;
  }
  printf("i: %d, n: %d\n", i, n);
  printf("1���� %d������ �մ� %d�Դϴ�.\n", n, sum);
  return 0;
}
