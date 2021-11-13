#include <stdio.h>
int main() {   
    printf(">> Mohit Namdeo\n");
    printf(">> Add Two Integersr\n");
    printf("--------------------------------\n");
    
    int number1, number2, sum;
    
    printf("Enter two integers: ");
    scanf("%d %d", &number1, &number2);

    // calculating sum
    sum = number1 + number2;      
    
    printf("%d + %d = %d", number1, number2, sum);
    return 0;
}
