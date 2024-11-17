#include <stdio.h>
int main() 
{
    int marks[5][2] = 
    {
        {85, 90},  
        {78, 99},  
        {92, 87},  
        {99, 80},  
        {29, 35}   
    };
    int i, j;
    int max = marks[0][0];  
    int min = marks[0][0];  
    for(i = 0; i < 5; i++) 
    {
        for(j = 0; j < 2; j++) 
        {
           if(marks[i][j] > max) 
            {
                max = marks[i][j];
            }
           if(marks[i][j] < min) 
            {
                min = marks[i][j];
            }
        }
    }
    printf("The maximum score is: %d\n", max);
    printf("The minimum score is: %d\n", min);
    return 0;
}
