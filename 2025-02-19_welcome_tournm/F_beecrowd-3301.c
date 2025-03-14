// RAMIDE'S TRAINING
// 2025/02 - Presentation Tournament
// Problem -> Problem F
// Finished by 24 Feb 2025
// TIME SPENT: 


#include <stdio.h>
#include <string.h>

int main() {
  
  int h, z, l;
  scanf("%d %d %d", &h, &z, &l);
  
  if ( (h < z && h > l) || (h < l && h > z)) {
    printf("huguinho\n");
  }
  
  if ( (z < h && z > l) || (z < l && z > h)) {
    printf("zezinho\n");
  }
  
  if ( (l < h && l > z) || (l < z && l > h)) {
    printf("luisinho\n");
  }
  
  return 0;
}