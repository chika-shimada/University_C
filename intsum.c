/*
* intsum.c
*
*  Created on: 2022/10/20
*      Author: 221p1021
*/

#include <stdio.h>

int
main(void)
{
  int n;
  int integer;
  double reciprocal;
  double square;

  integer = 0;
  reciprocal = 0;
  square = 0;

  for (n = 1; n <= 1000; n++)
  {
    integer = integer + n;
    reciprocal = reciprocal + 1.0 / n;
    square = square + (1 / n ^ 2);
  }

  printf("%d\n", integer);
  printf("%e\n", reciprocal);
  printf("%e\n", square);

  return 0;
}