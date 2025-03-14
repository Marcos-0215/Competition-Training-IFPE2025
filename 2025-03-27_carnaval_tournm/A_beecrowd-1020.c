// RAMIDE'S TRAINING
// 2025/02 - Carnaval Tournament
// Problem A
// Finished by 27 Feb 2025
// TIME SPENT: 6min


#include <stdio.h>
#include <string.h>

int main() {
  
  long long int dias, ano, mes;
  
  scanf("%lld", &dias);
  
  ano = dias / 365;
  dias -= ano*365;
  
  mes = dias / 30;
  dias -= mes*30;
  
  printf("%lld ano(s)\n", ano);
  printf("%lld mes(es)\n", mes);
  printf("%lld dia(s)\n", dias);
  
  return 0;
}