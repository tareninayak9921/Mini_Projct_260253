#include "calculator.h"
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

error_t division(xi *ai)
{
    if(ai->a2==0)
    {
        ai->o1=0;
        return ERROR_DIVISION_BY_ZERO;
    }
    else
    {
        ai->o1=ai->a1/ai->a2;
        return SUCCESS;
    }
}