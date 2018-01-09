//
// Created by hoully on 18-1-8.
//

#include "Util.h"

float inner_product(float* first1, int length, float* first2)
{
    int index = 0;
    float init = 0;
    while (index < length) {
        init += (*first1)*(*first2);
        ++index; ++first2;
    }
    return init;
}

void print_list(float* list, int length){
    int index;
    for(index = 0; index < length;index++){
        std::cout << list[index] <<std::endl;
    }
}