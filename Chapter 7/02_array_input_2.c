#include <stdio.h>
int main()
{
    int marks[5];
    int *ptr = marks;
    printf("Enter marks of 5 student : \n");
    // scanf("%d %d %d %d %d\n", &marks[0], &marks[1], &marks[2], &marks[3], &marks[4]);
    // printf("%d %d %d %d %d\n", marks[0], marks[1], marks[2], marks[3], marks[4]);
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &*ptr);
        ptr++;
    }
    ptr = marks;
    for (int i = 0; i < 5; i++)
    {
        printf("the value of marks at index %d is %d\n", i, *ptr);
        ptr++;
    }
    return 0;
}