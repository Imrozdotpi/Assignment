#include <stdio.h>

int main() 
{int marks[5][2] = 
    {
        {85, 90},  
        {78, 88},  
        {99, 87},  
        {74, 80},  
        {29, 99}   
    };
    int i, j;
    int found = 0;  
    for(i = 0; i < 5; i++) 
    {
        for(j = 0; j < 2; j++) 
    {if(marks[i][j] == 99) 
        {
        printf("Student %d scored 99 in Subject %d\n", i + 1, j + 1);
        found = 1; 
        break;     
        }
    if (found) break;  
    }
    
    if (!found) 
    {
        printf("No student\n");
    }
    }
 return 0;
}
