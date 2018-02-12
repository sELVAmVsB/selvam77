#include <stdio.h>
#inclufe<conio.h>
int main()
{
    int arr[20], limit, count;
    printf("Enter Limit:\t");
    scanf("%d", &limit);
  
    for(count = 0; count < limit; count++)
    {
        scanf("%d", &arr[count]);
    }

    for(count = 0; count < limit; count++)
    {
        printf("%d\t", arr[count]);
    }   
    printf("\nReverse of Array\n");
    
    {
        printf("%d\t", arr[count]);
    }
    printf("\n");
 getch ();
 return 0;
}
