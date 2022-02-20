#include <stdio.h>

int main()
{
  int a = 3;
  int b = -3;

  // false -> 0
  printf("%d\n", a < b);
  // true -> 1
  printf("%d\n", a > b);

  /**
   * shift 연산
   * - 정수형에 대해서만 연산 가능
   * - 최적화가 필요한 경우 사용
   */
  int f = 175;
  printf("%d\n", f >> 2); // 43 = int( 175 / 2^2 )
  printf("%d\n", f << 2); // 700 = 175 * 2^2

  return 0;
}