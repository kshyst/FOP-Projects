#include <stdio.h>

int main()
{
    float ax , bx , cx , dx , ay , by , cy , dy ;
    
    scanf("%f %f" , &ax , &ay);
    scanf("%f %f" , &bx , &by);
    scanf("%f %f" , &cx , &cy);
    scanf("%f %f" , &dx , &dy);

    int area_abc , area_abd , area_acd , area_bcd;

    area_abc = ax * by + bx * cy + cx * ay - ay * bx - by * cx - cy * ax;
    area_abd = ax * by + bx * dy + dx * ay - ay * bx - by * dx - dy * ax;
    area_acd = ax * cy + cx * dy + dx * ay - ay * cx - cy * dx - dy * ax;
    area_bcd = bx * cy + cx * dy + dx * by - by * cx - cy * dx - dy * bx;

    if(area_abc < 0)
    {
        area_abc *= -1;
    }
    if(area_abd < 0)
    {
        area_abd *= -1;
    }
    if(area_acd < 0)
    {
        area_acd *= -1;
    }
    if(area_bcd < 0)
    {
        area_bcd *= -1;
    }
    

    if (area_abc == (area_abd + area_acd + area_bcd) ||
        area_acd == (area_abc + area_abd + area_bcd) ||
        area_abd == (area_abc + area_acd + area_bcd) ||
        area_bcd == (area_abc + area_acd + area_abd))
    {
        printf("%d" , 0);
    }
    else
    {
        printf("%d" , 1);
    }
    

    return 0;
}