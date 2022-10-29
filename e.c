#include <stdio.h>

void euclid(int m, int n)
{
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
}

int main(void)
{
    euclid(3413124, 3388935);
    euclid(1003553, 914743);
    euclid(2247473, 2247472);
    euclid(1156193052, 998423328);
    return 0;
}
