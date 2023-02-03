#include <stdio.h>

int main() {
  int x, y, w, h; scanf("%d %d %d %d",&x, &y, &w, &h);
  int n = 1001;
  int a[6] = {x,y,w,h,w-x,h-y};
  
  for(int i = 0; i < 6; ++i) {
    if(a[i] < n) n = a[i];
  }
  
  printf("%d",n);
  
  return 0;
}
