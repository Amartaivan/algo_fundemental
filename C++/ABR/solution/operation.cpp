#include<stdio.h>

main()
{
  double a,b,s,q,p;

  scanf("%lf %lf",&a,&b);
  s=a+b;
  q=a-b;
  p=a*b;
  printf("%.1lf\n",s);
  printf("%.1lf\n",q);
  printf("%.1lf\n",p);
}
