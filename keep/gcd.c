#include <stdio.h>


int gcd(int a, int b) {
  if (b > a)
    return gcd(b, a);

  if (a%b == 0)
    return b;

  return gcd(b, a%b);
}

int main() {
  int a,b;
  scanf("%d %d", &a, &b);

  printf("%d\n", gcd(a, b));

  return 0;
}
