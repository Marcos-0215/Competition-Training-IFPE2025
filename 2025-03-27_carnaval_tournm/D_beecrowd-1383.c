// RAMIDE'S TRAINING
// 2025/02 - Carnaval Tournament
// Problem D
// Finished by 27 Feb 2025
// TIME SPENT: 45min


#include <stdio.h>
#include <string.h>


int partition(int array[], int firstIdx, int lastIdx) {
    
    int pivot = array[lastIdx]; 
    // ESTE QUICKSORT SEMPRE ESCOLHE O ULTIMO ELEMENTO COMO PIVOT
    int i = firstIdx - 1;
    
    for (int j= firstIdx; j<= lastIdx - 1; j++) {
        if (array[j]<pivot) { 
    // Aqui se define se é em ordem CRESCENTE OU DECRESCENTE
            i++;
            int temp = array[i];
            array[i] = array[j];
            array[j] = temp;
        }
    }
    
    i++;
    int temp = array[i];
    array[i] = array[lastIdx];
    array[lastIdx] = temp;
    
    return i;
}


void quickSort(int array[], int firstIdx, int lastIdx) { 
    
    if (lastIdx <= firstIdx) return; // base case
    
    int pivot = partition(array, firstIdx, lastIdx);
    // ESTE QUICKSORT SEMPRE ESCOLHE O ULTIMO ELEMENTO COMO PIVOT
    
    quickSort(array, firstIdx, pivot - 1);
    quickSort(array, pivot+1, lastIdx);
}


int checar(int check[9]) {
  int res = 1;
  
  quickSort(check, 0, 8);
  
  
  for (int i=0; i<9; i++) {
    if (check[i]!=i+1) {
      res=0;
      break;
    }
  }
  
  return res;
}

int main() {
  
  int n;
  scanf("%d", &n);
  
  int check[9];
  
  /*
  for (int i=0; i<9; i++) {
    check[i][0] = i+1;
    check[i][1] = 0;
  }
  */
  
  
  for (int h=0; h<n; h++) {
    
    int matrix[9][9];
    
    int passou = 1;
    
    for (int i=0; i<9; i++) {
      for (int j=0; j<9; j++) {
        scanf("%d", &matrix[i][j]);
        check[j] = matrix[i][j];
      }
      
      if (passou) {
        passou = checar(check);
      }
      
    }
    
    if (passou) {
      
      for (int i=0; i<9; i++) {
        for (int j=0; j<9; j++) {
          check[j] = matrix[j][i];
        }
        
        passou = checar(check);
        if (!passou) {
          break;
        }
      }
    }
    
    if (passou) {
      
      int iMultipl = 0;
      int jMultipl = 0;
      
      for (int iMultipl=0; iMultipl<3; iMultipl++) {
        for (int jMultipl=0; jMultipl<3; jMultipl++) {
          
          int idx = 0;
          for (int i=3*iMultipl; i<(3*iMultipl)+3; i++) {
            for (int j=3*jMultipl; j<(3*jMultipl)+3; j++) {
              check[idx++] = matrix[j][i];
            }
          }
          
          passou = checar(check);
          if (!passou) {
            break;
          }
          
        }
        if (!passou) {
          break;
        }
      }
      
      
    }
    
    
    printf("Instancia %d\n", h+1);
    if (passou) {
      printf("SIM\n");
    } else {
      printf("NAO\n");
    }
    printf("\n");
    
    
    
    /*
    for (int i=0; i<9; i++) {
      for (int j=0; j<9; j++) {
        printf("%d.", matrix[i][j]);
      }
      printf("\n");
    }
    */
    
  }
  
  return 0;
}