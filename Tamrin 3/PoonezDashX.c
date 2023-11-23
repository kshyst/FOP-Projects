#include <stdio.h>

int main()
{
    int input , factorsPowers[10000] , index = 0 , ind = 2;
    scanf("%d" , &input);
 
    while(ind < input + 1)
    {
        if (input % ind == 0)
        {
            input /= ind;
            factorsPowers[index] = 1;
            index ++;
        }
        while(input % ind == 0)
        {
            input /= ind;
            factorsPowers[index - 1] ++;
        }
        ind++;
    }

    printf("%d" , index);

    for (int i = 0; i < index /2; i++)
    {
        int temp = index - 1 - i;
        if (factorsPowers[i] != factorsPowers[temp])
        {
            printf("\nNO");
            return 0;
        }
    }
     printf("\nYES");
    return 0;    
}