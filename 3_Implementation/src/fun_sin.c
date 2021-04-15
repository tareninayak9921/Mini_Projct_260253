#include "calculator.h"
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
error_t sine(zi *ti){
    float value=3.14159;
    ti->o3=sin((ti->a4 *value)/180);
    return SUCCESS;

}