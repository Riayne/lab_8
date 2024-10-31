#include <stdio.h>

int main(){

    int odd,i,j;

    printf("Enter an odd number to start the pattern: ");
    scanf("%d", &odd);

    printf("Pattern of odd numbers in decreasing order:\n");
    for (i = odd; i > 0; i = i - 2) {
        for (j = i; j > 0; j = j- 2) {
            printf("%d ", j);
        }
        printf("\n");
    }

    return 0; 
}
