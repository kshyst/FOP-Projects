#include <stdio.h> 
 
int main() 
{ 
    unsigned long long int price; 
    int cashLimit, cashTypeCount; 
    scanf("%llu%d%d", &price, &cashLimit, &cashTypeCount); 
 
    unsigned long long cashSum = 0; 
    int cnt = 0; 
    for (int i = 0; i < cashTypeCount; i++) 
    { 
        int x; 
 
        scanf("%d", &x); 
        if (x > cnt) 
        { 
            cnt = x; 
        } 
        cashSum += 1ULL << x; 
    } 
    long long count = 0; 
    for (int i = cnt; i >= 0; i--) 
    { 

        unsigned long long pw = 1ULL << i; 
 
        if (cashSum >= pw)
        { 
            count += (price / pw); 
            price -= (price / pw) * pw; 
            cashSum -= pw; 
        } 
    } 
 
    if (price > 0 || count > cashLimit) 
    { 
        printf("%d", 0); 
    } 
    else 
    { 
        printf("%d", 1); 
    } 
    return 0; 
}