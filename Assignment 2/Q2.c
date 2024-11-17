#include <stdio.h>
int main() 
{
    int marks[5][2] = {
        {85, 90},  
        {78, 88},  
        {92, 87},  
        {74, 80},  
        {29, 35}
    };
int i, j;
int totalMarks;  
    for(i = 0; i < 5; i++) 
    {
        totalMarks = 0;
        for(j = 0; j < 2; j++) 
        {
            totalMarks += marks[i][j];
        }
        printf("Student %d: Total Marks = %d, Grade: ", i + 1, totalMarks);
        if(totalMarks >= 150)
        {  
            printf("A\n");
        } 
        else if(totalMarks >= 120) 
        {  
            printf("B\n");
        } 
        else if(totalMarks >= 80)
        {  
            printf("C\n");
        } 
        else 
        {  
            printf("D\n");
        }
    }
    return 0;
}
