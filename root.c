#include <stdio.h>
#include <math.h>


double func(double x ,double a)
{
 return x * x * x - a;
}

double deriv(double x)
{
  return 3 * x * x;
}

void calculate(double x, double a)
{
  double delta;
  delta = 1.0e-7;
  while(fabs(func(x,a)) >= delta)
  {
    x = x - func(x,a) / deriv(x);
  }
  printf("%e\n", x);
  return;
}

int main(void)
{
  double x;
  double a;

  a = -10.0;
  x = -8.0;
  calculate(x,a);

 a = 34/107;
 x = 3.5/4.5;
 calculate(x,a);

 a = M_PI;
 x = 1.0;
 calculate(x,a);

 a = 1021.0;
 x = 10.0;
 calculate(x,a);

  return 0;
}

// -2.154435e+00
// 3.996402e-03
// 1.464592e+00
// 1.006952e+01