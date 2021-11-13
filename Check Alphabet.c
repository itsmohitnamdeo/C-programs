#include <stdio.h>

int main() {   
    printf(">> Mohit Namdeo\n");
    printf(">> Check Alphabet\n");
    printf("--------------------------------\n");
    
    char c;
    printf("Enter a character: ");
    scanf("%c", &c);

    if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
        printf("%c is an alphabet.", c);
    else
        printf("%c is not an alphabet.", c);

    return 0;

} 

