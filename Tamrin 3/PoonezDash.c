#include <stdio.h>

int main()
{
    int input , primeIndex = 0 ;
    int primes[9];
    scanf("%d" , &input);

    for (int i = 1; i < input +1 ; i++)
    {
        int is_i_Prime = 1;
        for (int j = 2; j * j <= i; j++)
        {
            if(i % j == 0)
            {
                is_i_Prime = 0;
                break;
            }

        }

        if (input % i == 0 && is_i_Prime == 1)
        {
            int temp = input , count = 0;

            while (temp % i == 0 && i != 1)
            {
                temp /= i;
                count ++;
            }
        
            primes[primeIndex -1] = count;
            primeIndex++;
        }
        
    }

    // for (int i = 0; i < primeIndex -1; i++)
    // {
    //     printf("%d" , primes[i]);
    //     printf("%c" , ' ');
    // }

    int x = 0 , isPalindrome = 1 ;
    for (int i = 0; i < primeIndex / 2; i++)
    {
        if(x != primeIndex / 2)
        {
            if(input % 2 != 0)
            {
                if (primes[primeIndex / 2 + x ] != primes[primeIndex / 2 - x])
                {
                    isPalindrome = 0;
                }
            }
            else
            {
                if (primes[primeIndex / 2 + 1 + x ] != primes[primeIndex / 2 - x])
                {
                    isPalindrome = 0;
                }
            }

            x ++;
        }
        else
        {
            break;
        }
    }

    printf("%d\n" , primeIndex -1);

    if (isPalindrome == 1)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
    
    
    
    
    
    


    return 0 ;
}