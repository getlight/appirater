#ifndef _APPIRATER_CONSTANTS_H_
    #define _APPIRATER_CONSTANTS_H_
    #define APPIRATER_FLOAT_ERROR_FACTOR 0.001
    #define APPIRATER_FLOAT_EQUAL(a, b) (fabs((a - b)) < APPIRATER_FLOAT_ERROR_FACTOR)
    #define APPIRATER_FLOAT_NOT_EQUAL(a, b) !APPIRATER_FLOAT_EQUAL(a, b)
    #define APPIRATER_FLOAT_LESS_THAN(a, b) (b - a > APPIRATER_FLOAT_ERROR_FACTOR)
    #define APPIRATER_FLOAT_GREATER_THAN(a, b) (a - b > APPIRATER_FLOAT_ERROR_FACTOR)
    #define APPIRATER_FLOAT_LESS_THAN_EQUAL(a, b) (APPIRATER_FLOAT_LESS_THAN(a, b) || APPIRATER_FLOAT_EQUAL(a, b))
    #define APPIRATER_FLOAT_GREATER_THAN_EQUAL(a, b) (APPIRATER_FLOAT_GREATER_THAN(a, b) || APPIRATER_FLOAT_EQUAL(a, b))
#endif