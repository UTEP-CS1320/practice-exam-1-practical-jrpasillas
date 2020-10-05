#include <stdio.h>

int main(void) {
  int n;
  
  scanf("%d", &n);
  if(n == 3) {
    double x1, x2, x3;
    scanf("%lf %lf %lf", &x1, &x2, &x3);
    printf("%.4lf\n", (x1+x2+x3) / n);
  }
  else if (n == 4) {
    double x1, x2, x3, x4;
    scanf("%lf %lf %lf %lf", &x1, &x2, &x3, &x4);
    printf("%.1lf\n", (x1+x2+x3+x4) / n);
  }

   return 0; 
}
