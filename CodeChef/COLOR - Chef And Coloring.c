#include <stdio.h>

int main() {
  int n, i, c, nr, ng, nb, np;
  scanf("%d ",&n);
  while (n--) {
    nr = ng = nb = 0;
    scanf("%d ",&i);
    while (i--) {
      c=getchar();
      switch (c) {
        case 'R': nr++ ; break;
        case 'G': ng++ ; break;
        case 'B': nb++ ; break;
        default: i++;
      }
    }
    if (nr >= ng && nr >= nb) np = ng + nb;
    else if (ng >= nr && ng >= nb) np = nr + nb;
    else np = nr + ng;
    printf("%d\n",np);
  }
  return 0;
}

