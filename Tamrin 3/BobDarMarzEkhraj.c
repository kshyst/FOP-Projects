#include <stdio.h>

int main()
{
    long long int base , n , m;

    scanf("%lld %lld %lld" , &base , &n , &m);
    long long int validNums[1000] = {NULL} , nInDecimalFactors[10000] = {NULL} , nInBaseFactors[10000] = {NULL};
    for (long long int i = 0; i < m ; i++)
    {
        scanf("%lld", &validNums[i]);
    }


    //converts n into decimal number and puts decimal in nInDecimal
    long long int temp = n , nInDecimal = 0  , pow = 1 , x = 1;

    while (temp > 0) 
    {
        pow ++;
        nInDecimal += (temp % 10)* x ;
        temp /= 10;
        x *= base;
    }

    //printf("%d" , nInDecimal);

    // adds the factors of nInDecimal into nInDecimalFactors[] array
    long long int index1 = 0; 
    for (long long int i = 1; i <= nInDecimal; i++)
    {
        if (nInDecimal % i == 0)
        {
            nInDecimalFactors[index1] = i; 
            index1 ++;
        }
    }

    // for (long long int i = 0; i < n; i++)
    // {
    //     if (nInDecimalFactors[i] == NULL || nInDecimalFactors[i] == 0 || nInDecimalFactors[i] == nInDecimal)
    //     {
    //         break;
    //     }
    //     else
    //     {
    //         printf("%d\t" , nInDecimalFactors[i]);
    //     }
        
    // }

    // converts each of factors to base and puts them in nInBaseFactors

    for (long long int i = 0; i < index1; i++)
    {
        long long int tmp = nInDecimalFactors[i] , nums[10000] = {NULL} , pos = 0 , divideBase = 0 , power10 = 1;
        
        while (tmp> 0)
        {
            nums[pos] = tmp % base;
            tmp /= base;
            pos++;
        }

        for (long long int j = 0; j < pos; j++)
        {
            divideBase += power10 * nums[j];
            power10 *= 10;
        }
                
        nInBaseFactors[i] = divideBase;

    }
    
    
    
    // printf("\n");

    // for (long long int i = 0; i < index1; i++)
    // {
    //     printf("%d\t" , nInBaseFactors[i]);
    // }


    long long int numsToPrint[1000] = {NULL} , index2 = 0;
    
    for (long long int i = 0; i < index1; i++) // loops through numbers in nInBaseFactors
    {
        long long int  nInBaseFactorsTemp = nInBaseFactors[i];
        int canPrintNum = 1;
        while (nInBaseFactorsTemp > 0) // loops through numbers in nInBaseFactors[i]
        {
            int isNumValid ;
            for (long long int j = 0; j < m ; j++) // loops through numbers in valid nums
            {
                isNumValid = 0;
                if (validNums[j] == nInBaseFactorsTemp % 10)
                {
                    isNumValid = 1;
                    break;
                }
            }
            if (isNumValid)
            {
                nInBaseFactorsTemp /= 10;
            }
            else if(!isNumValid)
            {
                canPrintNum = 0;
                break;
            }
        }

        if (canPrintNum == 1)
        {
            numsToPrint[index2] = nInBaseFactors[i];
            index2++;
        }
        

    }

    for (long long int i = 0; i < index1; i++)
    {
        if (numsToPrint[i] != NULL)
        {
            printf("%lld\n" , numsToPrint[i]);
        }
        
    }
    
    

    return 0;
}