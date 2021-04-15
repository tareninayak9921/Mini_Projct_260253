#include "calculator.h"
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
error_t power(xi *ai){
    ai->o1=pow((ai->a1),(ai->a2));
    return SUCCESS;
}