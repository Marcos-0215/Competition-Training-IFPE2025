// RAMIDE'S TRAINING
// 2025/02 - Carnaval Tournament
// Problem F
// Finished by 28 Feb 2025
// TIME SPENT: min


#include <stdio.h>
#include <string.h>


int main() {
  
  int r, c;
  
  scanf("%d %d", &r, &c);
  while(getchar()!='\n');
  
  char matrix[r][c+1];
  
  for (int i=0; i<r; i++) {
    
    scanf("%s", matrix[i]);
  }
  
  //printf("-------------\n");
  
  int result = 0;
  
  for (int i=0; i<r; i++) {
    for (int j=0; j<c; j++) {
      //printf("%c ", matrix[i][j]);
      
      if (matrix[i][j] == '#') {
        if (i==0 || j==0 || i==r-1 || j==c-1) {
          result++;
        } else if (matrix[i-1][j] == '.') {
          result++;
        } else if (matrix[i+1][j] == '.') {
          result++;
        } else if (matrix[i][j-1] == '.') {
          result++;
        } else if (matrix[i][j+1] == '.') {
          result++;
        }
        
      }
      //printf("\n");
    }
    
  }
  
  printf("%d\n", result);
  
  
  return 0;
}