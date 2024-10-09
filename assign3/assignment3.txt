#include<stdio.h>
int main()
{
  float i = -3.0;
  int k = i % 2;
  printf("%d", k);
    return 0;
}
cc     3-3.c   -o 3-3
#include<stdio.h>
int main()
{
  int a=10, b=3, c=2, d=4, result;
  result=a+a*-b/c%d+c*d;
  printf("%d", result);
  return 0;
}
15#include<stdio.h>
int main()
{
  int h=8;
  int b=4*6+3*4<h*5?4:3;
  printf("%d\n", b);
  return 0;
}
4
#include<stdio.h>
int main()
{
  int x=1, y=0;
  if(x && y) {
    printf("Both are true\n");
  } else {
    printf("At least one is false\n");
  }
  return 0;
}
At least one is false
#include<stdio.h>
int main()
{
  int x=10;
  if(x = 5) {
    printf("x is 5\n");
  } else {
    printf("x is not 5\n");
  }
  return 0;
}
x is 5
#include<stdio.h>
int main()
{
  int a=10, b=5;
  if(a > b)
    if (b > 0)
      printf("b is positive\n");
    else
     printf("b is non-positive\n");
  printf("a is greater than b\n");
  return 0;
}
b is positive
a is greater than b
#include<stdio.h>
int main()
{
  int x;
  x= 9<5+3 && 7;
  printf("%d", x);
  return 0;
}
0