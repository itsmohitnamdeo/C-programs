#include <stdio.h>
int main() {   
    printf(">> Mohit Namdeo\n");
    printf(">> Check Even or Odd\n");
    printf("--------------------------------\n");
    
    int num;
    printf("Enter an integer: ");
    scanf("%d", &num);

    // true if num is perfectly divisible by 2
    if(num % 2 == 0)
        printf("%d is even.", num);
    else
        printf("%d is odd.", num);
    
    return 0;
}
