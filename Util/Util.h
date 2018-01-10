//
// Created by hoully on 18-1-8.
//

#ifndef ECHIDIDY_UTIL_H
#define ECHIDIDY_UTIL_H

#include <iostream>
#include <malloc.h>
#include <cstring>

#define PointerPropertyBuilderByName(type, name, access_permission)\
    access_permission:\
        type name;\
    public:\
        inline void set_##name(type v){\
            name = v;\
        }\
        inline type get_##name(){\
            return name;\
        }

typedef struct ML_set{
    int index;
    float return_value;
}ML_set;


float inner_product (float*, int, float*);
void print_list(float*, int);
float pi(float*, int);
float sigma(float*, int);
int max_element(float*, int);

inline float* matrix_addr(float* base_addr, int index1, int index2, int row_column){
    return base_addr + index1*row_column + index2;
}

#endif //ECHIDIDY_UTIL_H
