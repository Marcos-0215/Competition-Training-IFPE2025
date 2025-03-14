// RAMIDE'S TRAINING
// 2025/02 - Carnaval Tournament
// Problem B
// Finished by 27 Feb 2025
// TIME SPENT: 22min 0s


#include <stdio.h>
#include <string.h>

int main() {
  
  int n;
  
  scanf("%d", &n);
  while(getchar()!='\n');
  
  
  while (n--) {
    
    int leds = 0;
    
    char num[101];
    //fgets(num, 100, stdin);
    //num[strlen(num)-1] = '\0';
    
    scanf("%s", num);
    
    for (int i=0; num[i]!='\0'; i++) {
      
      char letra = num[i];
      
      if (letra == '1') {
        leds += 2;
      }
      
      if (letra == '2' || letra == '3' || letra == '5') {
        leds += 5;
      }
      
      if (letra == '4') {
        leds += 4;
      }
      
      if (letra == '6' || letra == '9' || letra == '0') {
        leds += 6;
      }
      
      if (letra == '7') {
        leds += 3;
      }
      
      if (letra == '8') {
        leds += 7;
      }
      
    }

    printf("%d leds\n", leds);
  }
  
  // 1 -> 2
  // 2 -> 5
  // 3 -> 5
  // 4 -> 4
  // 5 -> 5
  // 6 -> 6
  // 7 -> 3
  // 8 -> 7
  // 9 -> 6
  // 0 -> 6
  
  return 0;
}