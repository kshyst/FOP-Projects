#include <stdio.h>

int main() {
    unsigned long long int price ; 
    int cashLimit , cashTypeCount;
    scanf("%llu%d%d" , &price , &cashLimit , &cashTypeCount);

    int cashSum = 0 , count = 0;
    for (int i = 0; i < cashTypeCount; i++)
    {
        int x;
        scanf("%d", &x);
        cashSum += x;
    }

    for (int i = 63; i >=0; i--)
    {
        unsigned long long int x = 1 << i;
        while ((price >= x) && ((i & cashSum) > 0) && price > 0 )
        {
            price -= x;
            count ++;
            cashLimit --;
        }
        
    }
    
    if (price > 0 && cashLimit >= 0)
    {
        printf("%d" , count );
    }
    else
    {
        printf("%d" , 0);
    }
    
    
    return 0;
}