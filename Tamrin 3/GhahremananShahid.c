#include <stdio.h>

int main()
{
    int n , maxInput = 0 , minInput;
    scanf("%d" , &n);
    int numbers[n];

    for (int i = 0; i < n; i++)
    {
        int x ;
        scanf("%d" , &x);
        numbers[i] = x;
    }
    
    int max = 0;
    for (int i = 0; i < n; i++)
    {
        if (numbers[i] > max)
        {
            max = numbers[i];
        }
    }

    

    for (int i = max ; i >= 0; i--)
    {
        printf("%d%c" , i , ' ');
        for (int j = 0; j < n; j++)
        {
            if (numbers[j] != i)
            {
                printf(" ");
            }
            else if(j == 0 || j == n - 1 || 
                    ((numbers[j] > numbers[j - 1]) && (numbers[j] > numbers[j + 1])) ||
                    ((numbers[j] < numbers[j - 1]) && (numbers[j] < numbers[j + 1])))
            {
                printf("+ ");
            }
            else
            {
                printf("* ");
            }
            
        }
            printf("\n");
        

    }

    return 0;
}