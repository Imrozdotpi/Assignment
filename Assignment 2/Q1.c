#include <stdio.h>
int main() 
{
   int marks[5][2] = {
        {85, 90}, 
        {78, 88}, 
        {92, 87}, 
        {74, 80}, 
        {89, 91}  
    };
int i, j;
    for(i = 0; i < 5; i++) 
    {
        for(j = 0; j < 2; j++) 
        {
            marks[i][j] += 5; 
        }
    }
    printf("Updated Marks:\n");
    for(i = 0; i < 5; i++) 
    {
        printf("Student %d: ", i+1);
        for(j = 0; j < 2; j++) 
        {
            printf("%d ", marks[i][j]);
        }
        printf("\n");
    }
    return 0;
}
