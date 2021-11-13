#include <stdio.h>
int main() {   
    printf(">> Mohit Namdeo\n");
    printf(">> Add Two Integersr\n");
    printf("--------------------------------\n");
    
    double a, b, product;
    printf("Enter two numbers: ");
    scanf("%lf %lf", &a, &b);  
 
    // Calculating product
    product = a * b;

    // %.2lf displays number up to 2 decimal point
    printf("Product = %.2lf", product);
    
    return 0;
}
