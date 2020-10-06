#include <stdio.h>

int main_avg(void) {
  int n;
  //Read the number of numbers in the input
  printf("This will calculate the average for 3 values or 4 values given\n");
  scanf("%d", &n);
  //If there are 3 set of numbers present, the average of the 3 numbers will be printed as output
  if(n == 3) {
    double x1, x2, x3;
    scanf("%lf %lf %lf", &x1, &x2, &x3);
    printf("%.4lf\n", (x1+x2+x3) / n);
  }
  //This test finds the average of the numbers if there are 4 set of numbers present instead of 3
  else if (n == 4) {
    double x1, x2, x3, x4;
    scanf("%lf %lf %lf %lf", &x1, &x2, &x3, &x4);
    printf("%.1lf\n", (x1+x2+x3+x4) / n);
  }

   return 0; 
}

