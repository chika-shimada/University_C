/*
 * euclid.c
 *
 *  Created on: 2022/10/29
 *      Author: shimadachika
 */

#include <stdio.h>

int
main(void)
{
    int m;
    int n;
    m = 3413124;
    n = 3388935;
    if(m < n)
    {
        printf("%d\n", m);
    }
    else
    {
    while (m >= n)
    {
        if (n == 0)
        {
	        printf("%d\n", m);
            break;
        }
        else
        {
            int t;
            t = n;
            n = m % n;
            m = t;
        }
    }
    }

    // //問題１
    // m = 3413124;
    // n = 3388935;
    // if(m < n)
    // {
    //     printf("%d\n", m);
    // }
    // else
    // {
    // while (m >= n)
    // {
    //     if (n == 0)
    //     {
	//         printf("%d\n", m);
    //         break;
    //     }
    //     else
    //     {
    //         int t;
    //         t = n;
    //         n = m % n;
    //         m = t;
    //     }
    // }
    // }

    // //問題２
    // m = 1003553;
    // n = 914743;
    // if(m < n)
    // {
    //     printf("%d\n", m);
    // }
    // else
    // {
    // while (m >= n)
    // {
    //     if (n == 0)
    //     {
	//         printf("%d\n", m);
    //         break;
    //     }
    //     else
    //     {
    //         int t;
    //         t = n;
    //         n = m % n;
    //         m = t;
    //     }
    // }
    // }

    // //問題３
    // m = 2247473;
    // n = 2247472;
    // if(m < n)
    // {
    //     printf("%d\n", m);
    // }
    // else
    // {
    // while (m >= n)
    // {
    //     if (n == 0)
    //     {
	//         printf("%d\n", m);
    //         break;
    //     }
    //     else
    //     {
    //         int t;
    //         t = n;
    //         n = m % n;
    //         m = t;
    //     }
    // }
    // }

    // //問題４
    // m = 1156193052;
    // n = 998423328;
    // if(m < n)
    // {
    //     printf("%d\n", m);
    // }
    // else
    // {
    // while (m >= n)
    // {
    //     if (n == 0)
    //     {
	//         printf("%d\n", m);
    //         break;
    //     }
    //     else
    //     {
    //         int t;
    //         t = n;
    //         n = m % n;
    //         m = t;
    //     }
    // }
    // }
  return 0;
}
