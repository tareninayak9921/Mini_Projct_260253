#include "calculator.h"
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
error_t cosine(zi *ti){
    float value=3.14159;
    ti->o3=cos((ti->a4 *value)/180);
    return SUCCESS;
}