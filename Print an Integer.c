#include <stdio.h>
int main() {   
    printf(">> Mohit Namdeo\n");
    printf(">> Print an Integer\n");
    printf("--------------------------------\n");
    
    int number;
    printf("Enter an integer: ");  
    
    // reads and stores input
    scanf("%d", &number);

    // displays output
    printf("You entered: %d", number);
    
    return 0;
}
