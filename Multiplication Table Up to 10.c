#include <stdio.h>

int main() {   
    printf(">> Mohit Namdeo\n");
    printf(">> Multiplication Table Up to 10\n");
    printf("--------------------------------\n");
    
    int n, i;
  printf("Enter an integer: ");
  scanf("%d", &n);
  for (i = 1; i <= 10; ++i) {
    printf("%d * %d = %d \n", n, i, n * i);
  }
  return 0;
} 

