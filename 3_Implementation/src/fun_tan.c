#include "../inc/calculator.h"
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
error_t tangent(zi *ti){
    if((int)(ti->a4 /90)%2 == 1){
	ti->o3=2;
	return UNDEFINED;
    }	
    float val=3.14159;
    ti->o3=ti->a4;
    return SUCCESS;

}