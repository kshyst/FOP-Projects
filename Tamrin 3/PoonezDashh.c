#include <stdio.h> 

int main() 
{ 
    int input , factorsIndex = 0 , count = 0; 
    scanf("%d" , &input); 
    int factors[100000]; 

    for (int i = 2; i * i <= input; i++) 
    { 
        if (input % i == 0) 
        {        
            int factorsCount = 0 , temp = input; 
            while (temp % i == 0) 
            { 
                temp /= i; 
                factorsCount ++; 
            } 
            factors[factorsIndex]  = factorsCount; 
            //printf("%d\t" , factors[factorsIndex]); 
            temp = input; 
            factorsCount = 0; 
            factorsIndex ++; 
            count ++; 
        } 
         
    } 
     
    for (int i = 0; i < factorsIndex; i++) 
    { 
        printf("%d\t" , factors[i]); 
    } 

    int isPal = 1; 
    for (int i = 0; i <= factorsIndex / 2; i++) 
    { 
        if ((factorsIndex + 1) % 2 != 0) 
        { 
            if (factors[factorsIndex / 2 + i] != factors[factorsIndex / 2 - i]) 
            { 
                isPal = 0; 
            }             
        } 
        else 
        { 
            if (factors[factorsIndex / 2 + 1 + i] != factors[factorsIndex / 2 - i]) 
            { 
                isPal = 0; 
            }   
        } 
         
    } 

    printf("%d\n" , count); 
     
    if (isPal == 1) 
    { 
        printf("YES"); 
    } 
    else 
    { 
        printf("NO"); 
    } 
     

    return 0; 
}