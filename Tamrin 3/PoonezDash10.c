#include <stdio.h>

int main()
{
    int input , factorsPowers[1000] ;
    scanf("%d" , &input);

    int index = 0;
    for (int i = 2; i < input + 1; i++)
    {
        if (input % i == 0)
        {
            factorsPowers[index] = 1;
            input /= i;
            index ++;
        }
        while(input % i == 0)
        {
            factorsPowers[index - 1] ++;
            input /= i;
        }
      
    }

    printf("%d\n" , index);

    for (int i = 0; i < index /2; i++)
    {
        if (factorsPowers[i] != factorsPowers[(index - i - 1)])
        {
            printf("NO");
            return 0;
        }
        else
        {
            printf("YES");
            return 0;   
        }
    } 
}