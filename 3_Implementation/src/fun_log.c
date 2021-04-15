#include "calculator.h"
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
error_t logarithm(yi *si){
    if(si->a3<=0)
    {
        si->o2=0;
        return UNDEFINED;   
    }
    else{
        si->o2=log10(si->a3);
        return SUCCESS;
    }
    
    
}