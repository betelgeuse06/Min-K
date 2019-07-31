#include <stdio.h>

int main(int argc, char const *argv[]) {
  int i, n;
  int sum;
  puts("1부터 n까지의 합을 구합니다.");
  printf("n의 값 : ");
  scanf("%d", &n);
  sum = 0;
  for (i = 1; i <= n; i++) {
    sum += i;
  }
  printf("i:  %d, n: %d\n", i, n);
  printf("1부터 %d까지의 합는 %d입니다.\n", n, sum);
  return 0;
}
