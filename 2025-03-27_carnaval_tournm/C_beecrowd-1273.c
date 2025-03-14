// RAMIDE'S TRAINING
// 2025/02 - Carnaval Tournament
// Problem B
// Finished by 27 Feb 2025
// TIME SPENT: 16min 00s


#include <stdio.h>
#include <string.h>

int main() {
  
  int n;
  
  scanf("%d", &n);
  
  while (n) {
    
    char str[n][51];
    int maior = 0;
    
    for (int i=0; i<n; i++) {
      scanf("%s", str[i]);
      
      if (strlen(str[i]) > maior) {
        maior = strlen(str[i]);
      }
      
      //printf("String = %s\n", str[i]);
      //printf("maior = %d\n", maior);
    }
    
    
    for (int i=0; i<n; i++) {
      printf("%*s\n", maior, str[i]);
    }
    
    scanf("%d", &n);
    
    if (n) {
      printf("\n");
    }
  }
  
  return 0;
}