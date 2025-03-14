// RAMIDE'S TRAINING
// 2025/02 - Carnaval Tournament
// Problem E
// Finished by 28 Feb 2025
// TIME SPENT: 11min


#include <stdio.h>
#include <string.h>


int main() {
  
  int n;
  
  while (scanf("%d", &n) != EOF) {
    
    int spc = n/2;
    int tree = 1;
    
    while (spc >= 0) {
      for (int i=0; i<spc; i++) {
        printf(" ");
      }
      
      for (int i=0; i<tree; i++) {
        printf("*");
      }
      
      tree += 2;
      spc--;
      printf("\n");
    }
    
    spc = n/2;
    
    for (int i=0; i<spc; i++) {
      printf(" ");
    }
    printf("*\n");
    
    spc--;
    
    for (int i=0; i<spc; i++) {
      printf(" ");
    }
    printf("***\n\n");
    
    //printf("FIM\n");
    
  }
  
  return 0;
}