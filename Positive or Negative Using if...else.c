#include <stdio.h>

int main() {   
    printf(">> Mohit Namdeo\n");
    printf(">> Positive or Negative Using if...else\n");
    printf("--------------------------------\n");
    
    double num;
    printf("Enter a number: ");
    scanf("%lf", &num);
    if (num <= 0.0) {
        if (num == 0.0)
            printf("You entered 0.");
        else
            printf("You entered a negative number.");
    } else
        printf("You entered a positive number.");
    return 0;
} 

