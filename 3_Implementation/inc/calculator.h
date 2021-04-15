/**
 * @file calculator.h
 * @author 260253
 * @brief Basic mathematical function definations
 * @version 0.1
 * @date 2021-04-15
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#ifndef __CALCULATOR_H__
#define __CALCULATOR_H__
#include <stdlib.h>
/**
 * @brief Structure for storing Arthimetic functions input and output
 * 
 */
typedef struct xi{
    long long int a1,a2,o1;
}xi;
/**
 * @brief Structure for storing Single functions input and output
 * 
 */
typedef struct yi{
    float a3,o2;
}yi;
/**
 * @brief Structure for storing Trignometric functions input and output
 * 
 */
typedef struct zi{
    float a4,o3;
    
}zi;
/**
 * @brief Error values for calculator operations
 * 
 */
typedef enum error_t{
    SUCCESS=1,
    FAILURE=0,
    UNDEFINED=-1,
    ERROR_DIVISION_BY_ZERO=-2
}error_t;

/**
 * @brief compute sum of two numbers
 * 
 * @param ai ai pointer to arthimetic_inputs to send inputs for functions and store ouptut.
 * @return error_t SUCCESS if operation is completed successfully. Error value otherwise.
 */
error_t add(xi *ai);
/**
 * @brief compute difference of two numbers
 * 
 * @param ai ai pointer to arthimetic_inputs to send inputs for function and store ouptut.
 * @return error_t SUCCESS if operation is completed successfully. Error value otherwise.
 */
error_t subtract(xi *ai);
/**
 * @brief compute multiplication of two numbers
 * 
 * @param ai ai pointer to arthimetic_inputs to send inputs for function and store ouptut.
 * @return error_t SUCCESS if operation is completed successfully. Error value otherwise.
 */
error_t multiply(xi *ai);
/**
 * @brief compute division of two numbers
 * 
 * @param ai ai pointer to arthimetic_inputs to send inputs for function and store ouptut.
 * @return error_t SUCCESS if operation is completed successfully. Error value otherwise.
 */
error_t division(xi *ai);
/**
 * @brief compute intrest
 * 
 * @param ai ai pointer to arthimetic_inputs to send inputs for function and store ouptut.
 * @return error_t SUCCESS if operation is completed successfully. Error value otherwise.
 */
error_t intrest(xi *ai);
/**
 * @brief compute percentage
 * 
 * @param ai ai pointer to arthimetic_inputs to send inputs for function and store ouptut.
 * @return error_t SUCCESS if operation is completed successfully. Error value otherwise.
 */
error_t percentage(xi *ai);
/**
 * @brief compute distance using speed and time
 * 
 * @param ai ai pointer to arthimetic_inputs to send inputs for function and store ouptut.
 * @return error_t SUCCESS if operation is completed successfully. Error value otherwise.
 */
error_t distance(xi *ai);
/**
 * @brief compute speed using distance and time
 * 
 * @param ai ai pointer to arthimetic_inputs to send inputs for function and store ouptut.
 * @return error_t SUCCESS if operation is completed successfully. Error value otherwise.
 */
error_t speed(xi *ai);
/**
 * @brief compute power
 * 
 * @param ai ai pointer to arthimetic_inputs to send inputs for function and store ouptut.
 * @return error_t SUCCESS if operation is completed successfully. Error value otherwise.
 */
error_t power(xi *ai);
/**
 * @brief compute logarithm
 * 
 * @param si si pointer to single_inputs to send input for function and store ouptut.
 * @return error_t SUCCESS if operation is completed successfully. Error value otherwise.
 */
error_t logarithm(yi *si);
/**
 * @brief compute square_root
 * 
 * @param si si pointer to single_inputs to send input for function and store ouptut.
 * @return error_t SUCCESS if operation is completed successfully. Error value otherwise.
 */
error_t square_root(yi *si);
/**
 * @brief compute factorial
 * 
 * @param si si pointer to single_inputs to send input for function and store ouptut.
 * @return error_t SUCCESS if operation is completed successfully. Error value otherwise.
 */

error_t sine(zi *ti);
/**
 * @brief compute cosine function
 * 
 * @param ti ti pointer to trignometric_inputs to send inputs for function and store ouptut.
 * @return error_t SUCCESS if operation is completed successfully. Error value otherwise.
 */
error_t cosine(zi *ti);
/**
 * @brief compute tangent function
 * 
 * @param ti ti pointer to trignometric_inputs to send inputs for function and store ouptut.
 * @return error_t SUCCESS if operation is completed successfully. Error value otherwise.
 */
error_t tangent(zi *ti);


#endif