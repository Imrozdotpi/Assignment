#include <stdio.h>
int main() 
{
  int marks[5][2] = {
        {85, 90}, 
        {78, 99}, 
        {92, 87},  
        {99, 80},  
        {29, 35}   
    };
  int i, j;
    for(i = 0; i < 5; i++) 
    {
        for(j = 0; j < 2; j++) 
        {
            if(marks[i][j] % 2 == 0) 
            {
             printf("Student %d, Subject %d: %d is Even\n", i + 1, j + 1, marks[i][j]);
            }
            else 
            {
            printf("Student %d, Subject %d: %d is Odd\n", i + 1, j + 1, marks[i][j]);
            }
        }
    }
    return 0;
}
