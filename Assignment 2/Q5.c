#include <stdio.h>
int main() 
{int marks[5][2] = {
        {85, 90},  
        {78, 99},  
        {92, 87},  
        {99, 80},  
        {29, 35}   
    }  
int i, j;
int totalSum = 0;  
    for(i = 0; i < 5; i++) 
    {
        for(j = 0; j < 2; j++) 
        {
            totalSum += marks[i][j];  
        }
    }
    printf("The sum is: %d\n", totalSum);
return 0;
}
