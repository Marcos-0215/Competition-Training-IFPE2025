// RAMIDE'S TRAINING
// 2025/02 - Presentation Tournament
// Problem -> Problem E
// Finished by 24 Feb 2025
// TIME SPENT: 


#include <stdio.h>
#include <string.h>

int main() {
  
  int a, b;
  
  scanf("%d %d", &a, &b);
  
  if (a < 6 || b < 6) {
    printf("NO\n");
    return 0;
  }
  
  if (a > 17 || b > 17) {
    printf("YES\n");
  } else {
    
    if (a >= 14 && b >= 14) {
    printf("YES\n");
    } else {
      printf("NO\n");
    }
    
  }
  
  return 0;
}