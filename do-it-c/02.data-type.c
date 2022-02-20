#include <stdio.h>

int main() {
  printf("정수 표현 자료형\n");

  signed char minSignedChar = -128;
  signed char maxSignedChar = 127;
  printf("minSignedChar %i maxSignedChar %i\n", minSignedChar, maxSignedChar);

  unsigned char minUnsignedChar = 0;
  unsigned char maxUnsignedChar = 255;
  printf("minUnsignedChar %i maxUnsignedChar %i\n", minUnsignedChar, maxUnsignedChar);

  /* short int 2byte */
  signed short int minSignedShortInt = -32768;
  signed short int maxSignedShortInt = 32767;
  printf("minSignedShortInt %i maxSignedShortInt %i\n", minSignedShortInt, maxSignedShortInt);
  
  unsigned short int minUnsignedShortInt = 0;
  unsigned short int maxUnsignedShortInt = 65535;
  printf("minUnsignedShortInt %i maxUnsignedShortInt %i\n", minUnsignedShortInt, maxUnsignedShortInt);

  /* long int 4byte = 32bit, 그냥 long 또는 int로 써도 됨, 21억 4748만 */
  signed long int minSignedLingInt = -2147483648;
  signed long int maxSignedLingInt = 2147483647;
  printf("minSignedLingInt %ld maxSignedLingInt %ld\n", minSignedLingInt, maxSignedLingInt);
  
  /* long long int 8byte = 64bit */


  printf("실수 표현 자료형\n");
  /* float 4byte */
  
  /* double 8byte */

  return 0;
}