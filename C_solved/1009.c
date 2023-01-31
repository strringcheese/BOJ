#include <stdio.h>

int main() {
  int num; scanf("%d", &num);
  
  for(int i = 0; i < num; i++) {
    int a, b; scanf("%d %d", &a, &b);
    int res = 1;
    
    for(int j = 0; j < b; j++) {
      res = (res*a) % 10;
    }
    if(res == 0) printf("10\n");
    else printf("%d\n", res);
  }
  
  return 0;
}
