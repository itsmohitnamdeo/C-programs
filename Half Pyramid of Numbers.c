#include <stdio.h>

int main() {   
    printf(">> Mohit Namdeo\n");
    printf(">> Half Pyramid of numbers\n");
    printf("--------------------------------\n");
    
    int i, j, rows;
   printf("Enter the number of rows: ");
   scanf("%d", &rows);
   for (i = 1; i <= rows; ++i) {
      for (j = 1; j <= i; ++j) {
         printf("%d ", j);
      }
      printf("\n");
   }
   return 0;
} 

