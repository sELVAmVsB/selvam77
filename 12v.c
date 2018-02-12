
#include <stdio.h>
#include <stdlib.h>
 
int main() {
    int first, diff, terms, value, sum=0, i;
 
    printf("Enter the number of terms in AP series\n");
    scanf("%d", &terms);
 
 
 

    value = first;
    printf("AP SERIES\n");
    for(i = 0; i < terms; i++) {
        printf("%d ", value);
        sum += value;
        value = value + diff;
    }
 
    getch();
 return 0;
}
