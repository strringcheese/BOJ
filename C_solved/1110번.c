#include <stdio.h>

int main() {
  int num, cnt=0; scanf("%d",&num);
  int new_num = num;
  
  do {
    new_num = (new_num % 10) * 10 + ((new_num / 10) + (new_num % 10)) % 10;
    cnt++;
  }while(num != new_num);

  printf("%d",cnt);
  
  return 0;
}
