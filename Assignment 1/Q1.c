#include <stdio.h>
#include <math.h>
int countDigits(int num) 
{
    int count = 0;
    while (num != 0) 
    {
        num /= 10;
        count++;
    }
    return count;
}
int isArmstrong(int num) 
{
    int sum = 0;
    int originalNum = num;
    int numDigits = countDigits(num);

    while (num != 0) 
    {
        int digit = num % 10;
        sum += pow(digit, numDigits);
        num /= 10;
    }

    return sum == originalNum;
}

int main() 
{
    int num;
    

    printf("Enter a number: ");
    scanf("%d", &num);
    

    if (isArmstrong(num)) {
        printf("%d is an Armstrong number.\n", num);
    } 
    else {printf("%d is not an Armstrong number.\n", num);}
    
    return 0;
}

