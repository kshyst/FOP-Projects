#include <stdio.h>

int main()
{
    float ax , bx , cx , dx , ay , by , cy , dy ;
    scanf("%f %f" , &ax , &ay);
    scanf("%f %f" , &bx , &by);
    scanf("%f %f" , &cx , &cy);
    scanf("%f %f" , &dx , &dy);

    if ( (ax - ((bx+cx) / 2)) * (ax - ((bx+cx) / 2)) + (ay - ((by+cy) / 2)) * (ay - ((by+cy) / 2)) >= (ax - dx) * (ax - dx) +  (ay - dy) * (ay - dy) ||

    (dx - ((bx+cx) / 2))* (dx - ((bx+cx) / 2)) + (dy - ((by+cy) / 2)) * (dy - ((by+cy) / 2)) >= (dx - ax) * (dx - ax) +  (dy - ay) * (dy - ay)||

    (bx - ((ax+dx) / 2)) * (bx - ((ax+dx) / 2)) + (by - ((ay+dy) / 2)) * (by - ((ay+dy) / 2)) >= (bx - cx) * (bx - cx)+  (by - cy) * (by - cy) ||

    (cx - ((ax+dx) / 2)) * (cx - ((ax+dx) / 2)) + (cy - ((ay+dy) / 2)) * (cy - ((ay+dy) / 2)) >= (cx - bx) * (cx - bx) +  (cy - by) * (cy - by) )
    {
        printf("%d" , 0);
    }
    else if(ax <= 100 &&  ax >= -100 && 
            ay <= 100 &&  ay >= -100 &&
            bx <= 100 &&  bx >= -100 &&
            by <= 100 &&  by >= -100 &&
            cx <= 100 &&  cx >= -100 &&
            cy <= 100 &&  cy >= -100 &&
            dx <= 100 &&  dx >= -100 &&
            dy <= 100 &&  dy >= -100)

    {
        printf("%d" ,1);
    }
    
    
    return 0 ;
}