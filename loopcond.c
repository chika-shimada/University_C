/*
* loopcond.c
*
*  Created on: 2022/10/20
*      Author: 221p1021
*/

#include <stdio.h>

int
main(void)
{
  int n;
  for (n = 0; n <= 20; n++)
  {
    if (n > 5 && n <= 15)
    {
      printf("\n");
    }
    else
    {
      if (n % 3 == 0)
      {

        printf("ChikaShimada Hello World\n");
      }

      else
      {
        printf("%dHello World\n", n);
      }
    }

  }
}