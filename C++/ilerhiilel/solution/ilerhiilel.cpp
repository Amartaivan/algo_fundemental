#include<stdio.h>
#include<math.h>

using namespace std;

int main(){


  double x, y, s , q;

  scanf("%lf %lf",&x,&y);

  s = fabs(x) - fabs(y);
  q = 1 + fabs(x * y);

  printf("%.1lf\n",s/q);

  return 0;
}
