// RAMIDE'S TRAINING
// 2025/02 - Carnaval Tournament
// Problem G
// Finished by 04 Mar 2025
// TIME SPENT: min


#include <stdio.h>
#include <string.h>


int main() {
  
  int t;
  
  while (scanf("%d", &t) != EOF) {
    
    float min = 11.0;
    
    while (t--) {
      float time;
      scanf("%f", &time);
      
      if (time<min) {
        min = time;
      }
      
    }
    
    printf("%.2f\n", min);
    
  }
  
  
  return 0;
}