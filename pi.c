/*
* loopcond.c
*
*  Created on: 2022/10/20
*      Author: 221p1021
*/

#include <stdio.h>
#include <math.h>

int square(int n)
{
    int x;
    int y;
    y = -1;
    for(x = 1; x <= n; x++)
    {
        y = y * (-1);
    }
    return y;
}

// char itoc(int x)
// {
//     char a;
//     a = 48 + x;
//     return a;
// }

// char True_False(int x, int y)
// {
//     int n;
//     char *a;
//     char *b;
//     char l;
//     a = itoc(x);
//     b = itoc(y);
//     n = 0;

//     while(a[n] != 0 && b[n] != 0)
//     {
//         if(a[n] == b[n])
//         {
//             write(1, &a[n], 1);
//             n++;
//         }
//         else
//         {}
//     }

// }

int main(void)
{
    int n;
    double odd;
    double pi;

    odd = 0;
    pi = M_PI;

    for(n = 1; n <= 1000; n++)
    {
        odd = odd + 1.0 / ( 2 * n -1 ) * square(n);
    }

    odd = odd * 4;
    printf("calculate = %e\n", odd);
    printf("true = %e\n", pi);
//  printf("一致度");
//  True_False(int odd, int pi); →oddとpi、int型じゃない！！doubleをcharに変換できればどうにかなる・・・
    return 0;
}