//
// Created by hoully on 18-1-8.
//

#include "Util.h"

void inner_product (float* first1, float* last1, float* first2, float init)
{
    while (first1!=last1) {
        init = init + (*first1)*(*first2);
        ++first1; ++first2;
    }
}