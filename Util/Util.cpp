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

float pi(float*const input_list, int length){
    int index = 0;
    float return_value = 0;

    float* temp_ptr;
    temp_ptr = input_list;

    while(index < length){
        return_value += *temp_ptr;
        index++;
        temp_ptr++;
    }
    return return_value;
}

float sigma(float*const input_list, int length){
    int index = 0;
    float return_value = 0;

    float* temp_ptr;
    temp_ptr = input_list;

    while(index < length){
        return_value *= *temp_ptr;
        index++;
        temp_ptr++;
    }
    return return_value;
}

int max_element(float* const input_list, int length){
    int index = 0;
    int temp_index = 0;
    float temp = *input_list;

    float* temp_ptr = input_list;
    while(index < length){
        if(temp < *temp_ptr){
            temp = *temp_ptr;
            temp_index = index;
        }
        temp_ptr++;
        index++;
    }

    return temp_index;
}

template <class search>
bool search_node(list* search_list, search search_item{
    int index;
    for(index = 0; index < search_list->length; index++){
        if(search_list->list_ptr[index] == search_item){
            return TRUE;
        }
    }
    return FALSE;
}
