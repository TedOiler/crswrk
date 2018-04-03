#include <stdio.h>

int main(){
  float x = 100;
  char* y = "TedOiler";
  printf("<%.2f         > not justified\n", x);
  printf("<%12.2f> right justification \n",x);
  printf("<%-12.2f> left justification \n", x);

  printf("<%s    > no justification\n",y);
  printf("<%12s> rigth justification\n",y);
  printf("<%-12s> left justification\n",y);

  printf("<%-8s %3.2f> \n",y,x);
}
