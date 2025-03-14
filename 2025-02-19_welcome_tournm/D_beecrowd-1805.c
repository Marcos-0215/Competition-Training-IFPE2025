// RAMIDE'S TRAINING
// 2025/02 - Presentation Tournament
// Problem -> Problem D
// Finished by 24 Feb 2025
// TIME SPENT: 


#include <stdio.h>
#include <string.h>

int main() {
  
  long long int a, b;
  
  scanf("%lld %lld", &a, &b);
  
  //printf("A = %lld\n", a);
  //printf("B = %lld\n", b);
  
  printf("%lld\n", (a+b)*(b-a+1)/2);
  
  return 0;
}