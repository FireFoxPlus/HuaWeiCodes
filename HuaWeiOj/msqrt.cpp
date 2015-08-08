#include "preInclude.h"

double msqrt(double m)
{
    double low = 0 , high = m , mid = low + (high - low) / 2;
    while(abs(mid * mid - m ) > 1e-9)
    {
        if(mid * mid > m)
            high = mid;
        else
            low = mid;

        mid = low + (high - low) / 2;
    }
    return mid;
}


