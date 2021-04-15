#include "calculator.h"
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
error_t multiply(xi *ai){
    ai->o1=(ai->a1)*(ai->a2);
    return SUCCESS;
}