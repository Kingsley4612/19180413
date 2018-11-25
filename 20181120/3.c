#include <stdio.h>
int Sum(int n);


int main() {
    int num=0;
    scanf("%d",&num);
    printf("%d",Sum(num));
    return 0;
}

int Sum(int n)
{
  int i = 0;
  n == 0 || (i = Sum(n-1));
  return n + i;
}
