/**
 * C program to find LCM of two numbers using recursion
 */
 
#include <stdio.h>

int lcm(int a, int b)
{
    static int multiple = 0;
    
    /* Increments multiple by adding max value to it */
    multiple += b;
    
    /*
     * Base condition of recursion
     * If found a common multiple then return the multiple.
     */
    if((multiple % a == 0) && (multiple % b == 0))
    {
        return multiple;
    }
    else 
    {
        return lcm(a, b);
    }
}

int main()
{
    int num1, num2, LCM;

    
    printf("Enter any two numbers to find lcm: ");
    scanf("%d%d", &num1, &num2);
    
    /*
     * Ensures that first parameter of LCM function 
     * is always less than second 
     */
    if(num1 > num2)
        LCM = lcm(num2, num1);
    else
        LCM = lcm(num1, num2);
        
    printf("LCM of %d and %d = %d", num1, num2, LCM);
    
    return 0;
}


