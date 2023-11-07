#include <stdio.h>

int main()
{
    int ax , bx , cx , dx , ay , by , cy , dy ;
    int sum = 0;
    scanf("%f %f" , &ax , &ay);
    scanf("%f %f" , &bx , &by);
    scanf("%f %f" , &cx , &cy);
    scanf("%f %f" , &dx , &dy);

    sum += (bx * ay) - (ax * by);
    sum += (cx * by) - (bx * cy);
    sum += (dx * cy) - (cx * dy);
    sum += (ax * dy) - (dx * ay);

    if(sum >= 0)
    {
        printf("%d" , 0);
    }
    else 
    {
        printf("%d" , 1);
    }
    
    
    return 0 ;
}