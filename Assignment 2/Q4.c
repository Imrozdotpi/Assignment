#include <stdio.h>
int main() 
{int marks[5][2] = {
        {85, 90},  
        {78, 99},  
        {92, 87},  
        {99, 80},  
        {29, 35}   
    };
    int i, j;
    int count = 0;  
    int found = 0;  
    for(i = 0; i < 5; i++) 
    {
        found = 0;  
        for(j = 0; j < 2; j++) 
        {
            if(marks[i][j] == 99) 
            {
                if (!found) 
                {
                printf("Student %d scored 99 in: ", i + 1);
                found = 1;  
                }
                printf("Subject %d ", j + 1);
            }
        }
        if (found) 
        {
            printf("\n");
            count++;  
        }
    }
    printf("students who scored 99: %d\n", count);
    if(count == 0) 
    {
        printf("No student\n");
    }
return 0;
}
