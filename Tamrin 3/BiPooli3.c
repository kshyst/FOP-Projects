#include <stdio.h>

int main() {
    unsigned long long int price;
    int cashLimit, cashTypeCount;
    scanf("%llu%d%d", &price, &cashLimit, &cashTypeCount);

    unsigned long long cashSum = 0; 
    int count = 0,cnt = 0;
    for (int i = 0; i < cashTypeCount; i++)
    {
        int x;
    
        scanf("%d", &x);
        if(x > cnt){
            cnt = x;
        }
        cashSum += (long long unsigned)1 <<x;
    }

    for(int i =  cnt; i >= 0 ; i--)
    {
        unsigned long long int x = 1 << i;
        if ((price >= x) && (cashSum - x >= (unsigned long long int)0) && price > 0)
        {
            cashSum -= x;
            price -= (x/price)*price;
            count+= (x/price);
        }
        if(count > cashLimit || price<=0)
        {
            break;
        }
        printf("%d\n",i);
    }
    if (price <= 0 && count <= cashLimit)
    {
        printf("%d" , 1);
    }
    else
    {
        printf("%d" , 0);
    }
    return 0;
}